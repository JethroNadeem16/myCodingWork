#include <cstdlib>
#include <iostream>
#include "HeartRates.h"
using namespace std;

int main() {
    int day;
    int month;
    int year;
    cout << "Input month"<< endl;
    cin >> month; 
    cout << "Input day" << endl;
    cin >> day;
    cout << "Input year" << endl;
    cin >> year;
    Date birth(6, 16, 1950);
    Date current(month,day,year);
   
    HeartRates Jim("jim","ted", birth, current);
    int a = Jim.getAge();
    int max = Jim.getMaximumHeartRate(a);
    float d = max/2;
    cout << endl;
    cout << endl << "age:" << a << endl <<"Max heart rate:"<< max << endl
            <<"Target heart rate:" << d << endl << endl;
    return 0;
}

