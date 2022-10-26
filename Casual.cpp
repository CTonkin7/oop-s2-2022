#include <iostream>
#include <string>
#include <cmath>
#include "Casual.h"

using namespace std;
Casual::Casual(){
    payRate = 0;
}          
Casual::Casual(int inputPay){
    payRate = inputPay;
    energyLevel=100;
} 


int Casual::get_dayCount(){
    return dayCount;
}

void Casual::set_dayCount(int day){
    dayCount = day;
}

void Casual::endWorkDay(){
    dayCount++;
    energyLevel = 100;
}

void Casual::work(int mins){
    for (int i=0; i<mins;i++){
        if (energyLevel - 0.5 > 0){
            energyLevel = energyLevel - 0.5;
        }
    }
    if ((dayCount >= 0) && (dayCount <= 4)){
        hoursWorked[dayCount] = (mins/60);
    } else {
        hoursWorked[dayCount] = 2*(mins/60);
    }
}

float Casual::pay(){
    float pay = 0;
    int hours = 0;
    for (int i=0; i<7;i++){
        hours = hours + (hoursWorked[i]);
    }
    pay = hours*payRate;

    dayCount = 0;
    hoursWorked[7] = {0};
    return pay;
}