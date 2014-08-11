all : client server gpio_server gpio_client
	
gpio_server : gpio_server.cpp
	g++ -Wall -o gpio_server gpio_server.cpp gpio.pb.cc -lpthread -lprotobuf
gpio_client : gpio_client.cpp
	g++ -Wall -o gpio_client gpio_client.cpp gpio.pb.cc -lpthread -lprotobuf
server : server.cpp
	g++ -Wall -o server server.cpp message.pb.cc -lpthread -lprotobuf
client : client.cpp
	g++ -Wall -o client client.cpp message.pb.cc -lpthread -lprotobuf
message.pb.h : message.proto
	protoc --cpp_out=. message.proto
message.ph.cc : message.proto
	protoc --cpp_out=. message.proto
gpio.pb.h gpio.pb.cc : gpio.proto
	protoc --cpp_out=. gpio.proto
