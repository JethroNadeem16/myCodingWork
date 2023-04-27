GPP= g++ -std=c++17

all: a.out

a.out: main.o
	$(GPP) $^ -o $@

main.o: main.cpp GeneralList.hpp
	$(GPP) -c $<

clean:
	-rm *.o a.out
