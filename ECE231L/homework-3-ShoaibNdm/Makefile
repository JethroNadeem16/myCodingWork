all: main.o complex.o
	g++ main.o complex.o -o a.out

main.o: main.cpp complex.hpp
	g++ main.cpp -c

complex.o: complex.cpp complex.hpp
	g++ complex.cpp -c

clean:
	rm*.o
	rm a.out
