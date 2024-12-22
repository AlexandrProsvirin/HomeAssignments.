CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = assignment2b
OBJS = main.o Assignment2b.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp myheader.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Assignment2b.o: Assignment2b.cpp myheader.h
	$(CXX) $(CXXFLAGS) -c Assignment2b.cpp

clean:
	rm -f $(OBJS) $(TARGET)