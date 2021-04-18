
OBJECT_FILES = main.o sorting.o

sorting_engine: $(OBJECT_FILES)
	g++ $(OBJECT_FILES) -o main

main.o: ../src/main.cpp ../src/sorting.h
	g++ -c ../src/main.cpp 

sorting.o: ../src/sorting.h ../src/sorting.cpp
	g++ -c ../src/sorting.cpp

clean:
	rm *.o main
