# Prosvirin Alexandr B82
CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC = Transformer.cpp Weapon.cpp Pilot.cpp Autobot.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = transformers

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)