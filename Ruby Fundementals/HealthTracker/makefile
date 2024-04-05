heart: Date.o HeartRates.o main.o
	g++ -o heart Date.o HeartRates.o main.o
    
Date.o: Date.cpp Date.h
	g++ -g -Wall -c Date.cpp

HeartRates.o: HeartRates.cpp HeartRates.h
	g++ -g -Wall -c HeartRates.cpp

main.o: main.cpp Date.h HeartRates.h
	g++ -g -Wall -c main.cpp
clean:
	rm *.o