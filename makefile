
CXX = clang++-7
CXXFLAGS = -g -Wall -Wextra -Wpedantic

main.cpp: main.o map_fun.o Geometry.o
	$(CXX) $(CXXFLAGS) -o bin/main main.o map_fun.o Geometry.o
	rm main.o map_fun.o Geometry.o

main.o: src/main.cpp src/map_fun.hpp
	$(CXX) $(CXXFLAGS) -c src/main.cpp

map_fun.o: src/map_fun.hpp src/Geometry.hpp
	$(CXX) $(CXXFLAGS) -c src/map_fun.cpp

Geometry.o: src/map1.hpp src/Geometry.hpp
	$(CXX) $(CXXFLAGS) -c src/Geometry.cpp
