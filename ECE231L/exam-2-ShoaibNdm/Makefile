GPP = g++ -std=c++17

all: second_exam

second_exam: Guard_methods.o Boss_methods.o Employee_methods.o main.o
	$(GPP) $^ -o $@

second_exam: Boss_methods.o Employee_methods.o main.o
	$(GPP) $^ -o $@

second_exam: Employee_methods.o main.o
	$(GPP) $^ -o $@

Guard_methods.o: Guard_methods.cpp guard.hpp
	$(GPP) -c $< 

Boss_methods.o: Boss_methods.cpp boss.hpp
	$(GPP) -c $< 

Employee_methods.o: Employee_methods.cpp employee.hpp
	$(GPP) -c $< 

main.o: main.cpp employee.hpp
	$(GPP) -c $< 

clean:
	-rm *.o second_exam
