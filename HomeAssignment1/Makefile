#Prosvirin Alexandr B82
CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = hello
OBJS = main.o Assignment1.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp myheader.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Assignment1.o: Assignment1.cpp myheader.h
	$(CXX) $(CXXFLAGS) -c Assignment1.cpp

clean:
	rm -f $(OBJS) $(TARGET)