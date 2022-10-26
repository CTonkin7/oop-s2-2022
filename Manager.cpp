#include <iostream>
#include <string>
#include <cmath>
#include "Manager.h"

using namespace std;

Manager::Manager(){
    payRate = 0;
    energyLevel = 0;
}       
Manager::Manager(int inputPay){
    payRate = inputPay;
    energyLevel = 100;
}

void Manager::set_hoursWorked(float hours){
    hoursWorked = hours;
}
float Manager::get_hoursWorked(){
    return hoursWorked;
}

void Manager::set_daysWorked(int days){
    daysWorked = days;
}
int Manager::get_daysWorked(){
    return daysWorked;
}

void Manager::work(int mins){
    hoursWorked = hoursWorked + mins/60;
    for (int i=0; i<mins;i++){
        if (energyLevel - 0.25 > 0){
            energyLevel = energyLevel - 0.25;
        }
    }
    if(hoursWorked == 8){
        daysWorked++;
        hoursWorked = 0;
    }
}

float Manager::pay(){
    float pay;
    pay = 8*daysWorked*payRate;

    daysWorked = 0;
    hoursWorked = 0;
    return pay;
}