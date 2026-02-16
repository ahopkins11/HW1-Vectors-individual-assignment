CXX = g++
CXXFLAGS = -Wall -Wextra -g

test: main.o Vector.o
	$(CXX) $(CXXFLAGS) main.o Vector.o -o test

main.o: main.cpp Vector.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Vector.o: Vector.cpp Vector.h
	$(CXX) $(CXXFLAGS) -c Vector.cpp
clean:
	rm -f *.o test
