# Prosvirin Alexandr B82
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic
LDFLAGS = 
SRC = main.cpp Transformer.cpp Weapon.cpp Pilot.cpp Autobot.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = transformers

all: format $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)

format:
	astyle --style=google *.cpp *.h