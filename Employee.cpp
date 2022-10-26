#include <iostream>
#include <string>
#include <cmath>
#include "Employee.h"

using namespace std;

void Employee:: takeABreak(int mins){
    for (int i=0; i<mins;i++){
        if (energyLevel + 2 < 100){
            energyLevel = energyLevel + 2;
        }
    }
}
Employee::Employee(){
    payRate = 0;
    energyLevel = 0;
}
Employee::Employee(int inputPay){
    payRate = inputPay;
}

int Employee::get_payRate(){
    return payRate;
}
void Employee::set_payRate(int Pay){
    payRate = Pay;
}

float Employee::get_energyLevel(){
    return energyLevel;
}
void Employee::set_energyLevel(float energy){
    energyLevel = energy;
}