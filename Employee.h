#include <iostream>
#include <string>

using namespace std;

class Employee{
    public:
        int payRate;
        float energyLevel = 100;
        int get_payRate();
        void set_payRate(int Pay);

        float get_energyLevel();
        void set_energyLevel(float energy);

        void takeABreak(int mins);
        Employee();
        Employee(int inputPay);

        virtual void work(int mins) = 0;
        virtual float pay() = 0;

};