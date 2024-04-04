pay: Employee.o HourlyEmployee.o SalariedEmployee.o test.o
	g++ -o pay Employee.o HourlyEmployee.o SalariedEmployee.o test.o
    
Employee.o: Employee.cpp Employee.h
	g++ -g -Wall -c Employee.cpp

HourlyEmployee.o: HourlyEmployee.cpp HourlyEmployee.h
	g++ -g -Wall -c HourlyEmployee.cpp

SalariedEmployee.o: SalariedEmployee.cpp SalariedEmployee.h
	g++ -g -Wall -c SalariedEmployee.cpp

test.o: test.cpp Employee.h HourlyEmployee.h SalariedEmployee.h
	g++ -g -Wall -c test.cpp
clean:
	rm *.o