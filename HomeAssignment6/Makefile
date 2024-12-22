#Prosvirin Alexandr B82
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic -Werror
TEST_LIBS = -lgtest -lgtest_main -pthread
SRC = main.cpp class1.h class2.h class3.h template_class.h

all: run_tests

run_tests: $(SRC)
	$(CXX) $(CXXFLAGS) -o run_tests $(SRC) $(TEST_LIBS)

clean:
	rm -f run_tests
