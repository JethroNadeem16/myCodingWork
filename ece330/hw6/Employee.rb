class Employee

attr_reader :id, :lastName, :firstName, :middleInitial, :deptCode

def initialize(id,last,first,middle,dept)

	@id = id

	@lastName = last

	@firstName = first

	@middleInitial = middle

	@deptCode = dept

end

def setID(id)

	@id = id

end

def getID

	return @id

end

def setLast(last)

	@lastName = last

end

def getLast

	return @lastName

end

def setFirst(first)

	@firstName = first

end

def getFirst

	return @firstName

end

def setMiddle(middle)

	return @middleInitial

end

def getMiddle

	return @middleInitial

end

def setDept(dept)

	@deptCode = dept

end

def getDept

	return @deptCode

end

def printMes

	puts "Employee's ID is #{getID}"

	puts "Employee's Name is #{getFirst}, #{getMiddle}, #{getLast}"

	puts "Employee's Dept Code: #{getDept}"

end

end

class Hourly < Employee

attr_reader :hourlyRate, :hoursWorked

def initialize(id,last,first,middle,dept,hourlyRate,hoursWorked)

super(id,last,first,middle,dept)

	@hourlyRate = hourlyRate

	@hoursWorked = hoursWorked

end

def sethourlyRate(hourlyRate)

	@hourlyRate = hourlyRate

end

def gethourlyRate

	return @hourlyRate

end

def sethoursWorked(hoursWorked)

	@hoursWorked = hoursWorked

end

def gethoursWorked

	return @hoursWorked

end

def calculateSalary

	if (hoursWorked > 160) then

		overtime = (hoursWorked - 160)

		salary = ((hoursWorked - overtime) * hourlyRate) + (overtime * 1.5 * hourlyRate)

	else

		salary = (hoursWorked * hourlyRate)

end

end

def printMes1

printMes

	puts "Hours worked: #{gethoursWorked}"

	puts "Regular hourly rate: #{gethourlyRate}"

	puts "Overtime Rate (if 160 hours worked): #{gethourlyRate * 1.5}"

	puts "Monthly Income this paycheck: $ #{calculateSalary}"

end

end

class Salaried < Employee

attr_reader :salary, :adjustSalary, :fraction

def initialize(id,last,first,middle,dept,salary_earned,fraction_salary)

super(id,last,first,middle,dept)

	@salary = salary_earned

	@fraction = fraction_salary

	@adjustedSalary = getCalculatedSalary

end

def setSalary(salary_earned)

	@salary = salary_earned

end

def getSalary

return @salary

end

def setCalculatedSalary

	@adjustedSalary = getCalculatedSalary

end

def getCalculatedSalary

	if (fraction == 1) then

		adjustedSalary = salary

	else

		adjustedSalary = (fraction.to_f * salary.to_f)

end

end

def printMes2

printMes

	puts "Monthly Salary working full-time: $ #{getSalary}"

	puts "With adjustments for how much time worked - Salary now: $ #{getCalculatedSalary}"

end

end

e1 = Employee.new(001, "Nadeem", "Shoaib", "H", 16)

e2 = Employee.new(002, "Sewell", "Nick", "B", 9)

e3 = Employee.new(003, "Sewell", "Jack", "L", 2)

e4 = Hourly.new(004, "Zindanni", "Rayyan", "T", 7, 15.50, 24)

e5 = Hourly.new(005, "James", "Lebron", "E", 3, 20.75, 50)

e6 = Salaried.new(006, "Tucker", "Chris", "F", 21, 60000, 0.96)

e7 = Salaried.new(007, "Reeves", "Keanu", "S", 1, 110000, 0.99)

e1.printMes

	puts " "

e2.printMes

	puts " "

e3.printMes

	puts " "

e4.printMes1

	puts " "

e5.printMes1

	puts " "

e6.printMes2

	puts " "

e7.printMes2