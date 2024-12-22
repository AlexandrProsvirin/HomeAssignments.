#Prosvirin Alexandr B82
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wpedantic
SRC = main.cpp Transformer.cpp Autobot.cpp Decepticon.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = transformers

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)