#include <iostream>
#include "HeartRates.h"
#include "Date.h"
using namespace std;

HeartRates::HeartRates (const string &first, const string &last,
        const Date &dateOfBirth, const Date &curDate)
        : firstName (first),
        lastName (last),
        birthDate( dateOfBirth),
        currentDate( curDate)
{
    cout << "heart rate constructor:"
         << firstName <<' '<< lastName <<endl;
}
void HeartRates::print() const
{
    cout << "age:" << birthDate.getYear()<<endl << "age above";
    birthDate.print();
    cout <<"today's date:";
    currentDate.print();
    cout << endl;
}
int HeartRates:: getAge() const
{
    int age;
    age = currentDate.getYear() - birthDate.getYear();
    return age;
}
int HeartRates::getMaximumHeartRate(int age) const
{
    int max;
    max = 220 - age;
    return max;
}