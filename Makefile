CXX = g++
CXXFLAGS = -Wall -g

main: main.o module.o 
	$(CXX) $(CXXFLAGS) -o main main.o module.o

main.o: module.hpp

module.o: module.hpp