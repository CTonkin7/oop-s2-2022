#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class Casual: public Employee{
    public:
    Casual();            
    Casual(int inputPay);

    float hoursWorked[7];
    int dayCount;

    int get_dayCount();
    void set_dayCount(int day);
    void endWorkDay();

    void work(int mins);

    float pay();


};