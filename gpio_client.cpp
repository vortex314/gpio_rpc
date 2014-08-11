#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <netinet/in.h>
#include <resolv.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
#include <unistd.h>
#include "gpio.pb.h"
#include <iostream>
#include <google/protobuf/message.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>


using namespace google::protobuf::io;

using namespace std;
int main(int argv, char** argc){

/* Coded output stram */

GpioCmd gpioCmd ;

gpioCmd.set_cmd(GpioCmd_Cmd_GPIO);
gpioCmd.set_spiclock(1000000);
string data="HIGH";
data += (char) 0x12;
data += (char) 0xFE;
gpioCmd.set_dataout(data);
gpioCmd.set_spiport(1);


cout<<"size after serilizing is "<<gpioCmd.ByteSize()<<endl;
int siz = gpioCmd.ByteSize()+4;
char *pkt = new char [siz];
google::protobuf::io::ArrayOutputStream aos(pkt,siz);
CodedOutputStream *coded_output = new CodedOutputStream(&aos);
coded_output->WriteVarint32(gpioCmd.ByteSize());
gpioCmd.SerializeToCodedStream(coded_output);

        int host_port= 1101;
        const char* const host_name="127.0.0.1";

        struct sockaddr_in my_addr;

        char buffer[1024];
        int bytecount;
        int buffer_len=0;

        int hsock;
        int * p_int;
        int err;

        hsock = socket(AF_INET, SOCK_STREAM, 0);
        if(hsock == -1){
                printf("Error initializing socket %d\n",errno);
                goto FINISH;
        }

        p_int = (int*)malloc(sizeof(int));
        *p_int = 1;

        if( (setsockopt(hsock, SOL_SOCKET, SO_REUSEADDR, (char*)p_int, sizeof(int)) == -1 )||
                (setsockopt(hsock, SOL_SOCKET, SO_KEEPALIVE, (char*)p_int, sizeof(int)) == -1 ) ){
                printf("Error setting options %d\n",errno);
                free(p_int);
                goto FINISH;
        }
        free(p_int);

        my_addr.sin_family = AF_INET ;
        my_addr.sin_port = htons(host_port);

        memset(&(my_addr.sin_zero), 0, 8);
        my_addr.sin_addr.s_addr = inet_addr(host_name);
        if( connect( hsock, (struct sockaddr*)&my_addr, sizeof(my_addr)) == -1 ){
                if((err = errno) != EINPROGRESS){
                        fprintf(stderr, "Error connecting socket %d\n", errno);
                        goto FINISH;
                }
        }




       for (int i =0;i<10000;i++){
          for (int j = 0 ;j<10;j++) {

                if( (bytecount=send(hsock, (void *) pkt,siz,0))== -1 ) {
                        fprintf(stderr, "Error sending data %d\n", errno);
                        goto FINISH;
                }
                printf("Sent bytes %d\n", bytecount);
 //               usleep(1);
         }
        }
        delete pkt;

FINISH:
        close(hsock);

}
