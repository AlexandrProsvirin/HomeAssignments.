CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = assignment2a
OBJS = main.o Assignment2a.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp myheader.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Assignment2a.o: Assignment2a.cpp myheader.h
	$(CXX) $(CXXFLAGS) -c Assignment2a.cpp

clean:
	rm -f $(OBJS) $(TARGET)