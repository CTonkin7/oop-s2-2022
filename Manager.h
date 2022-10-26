#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class Manager: public Employee{
    public:
        Manager();          
        Manager(int inputPay);
        float hoursWorked;                     
        int daysWorked;

        void set_hoursWorked(float hours);
        float get_hoursWorked();

        void set_daysWorked(int days);
        int get_daysWorked();

        void work(int mins);

        float pay();

};
