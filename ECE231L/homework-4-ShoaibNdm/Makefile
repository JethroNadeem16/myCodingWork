GPP= g++ -std=c++17

all: a.out

a.out: Sphere.o Circle.o main.o
	$(GPP) $^ -o $@

main.o: main.cpp circle.hpp sphere.hpp
	$(GPP) -c $<

Circle.o: Circle.cpp circle.hpp
	$(GPP) -c $<

Sphere.o: Sphere.cpp sphere.hpp
	$(GPP) -c $<

clean:
	-rm *.o a.out
