#ifndef HEARTRATES_H
#define HEARTRATES_H

#include <string>
#include "Date.h"
using namespace std;

class HeartRates
{
public:
    HeartRates(const string&, const string&, const Date&, const Date&);
    int getAge() const;
    int getMaximumHeartRate(int) const;
    void print() const;
    void getTargetHeartRate();
private:
    string firstName;
    string lastName;
    const Date birthDate;
    const Date currentDate;
    int maximumHeartRate;
    int targetHeartRate;
};


#endif

