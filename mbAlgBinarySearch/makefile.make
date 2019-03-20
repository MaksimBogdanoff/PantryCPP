CXX=g++
GCC=gcc

FLAG=-std=c++11
GLAG_CHECK=-Wall

MINGW64_GCC=i686-w64-mingw32-gcc
MINGW64_GXX=i686-w64-mingw32-g++


mb_binary_search: mb_binary_search.o
	$(CXX) $(GLAG_CHECK) $(FLAG) mb_binary_search.o -o $@

mb_binary_search.o: mb_binary_search.cpp
	$(CXX) $(GLAG_CHECK) $(FLAG) -c mb_binary_search.cpp

