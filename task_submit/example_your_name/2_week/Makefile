TARGET = ./bin/demo

SRCS := $(wildcard ./src/*.cpp ./*.cpp)

OBJS := $(patsubst %cpp,%o,$(SRCS))

CFLG = -g -Wall -I/usr/local/include -Iinc -I./ -std=c++11

LDFG = -Wl,-rpath,/usr/local/lib -L./ -L/usr/local/lib -L./inc -lrt -lpthread -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_videoio

CXX = g++

$(TARGET) : $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LDFG)

%.o:%.cpp
	$(CXX) $(CFLG) -c $< -o $@

.PHONY : clean
clean:
	-rm ./*.o
	-rm ./src/*.o
