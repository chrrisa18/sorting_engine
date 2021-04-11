sorting_engine: main.o sorting.o
	g++ main.o sorting.o -o main

main.o: main.cpp sorting.h
	g++ -c main.cpp 

sorting.o: sorting.h sorting.cpp
	g++ -c sorting.cpp

clean:
	rm *.o main
