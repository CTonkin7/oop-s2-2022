#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(){
    myName = "";
    mySalary = 0;
}
Person::Person(int mySalary, string myName){
    this->myName = myName;
    this->mySalary = mySalary;
}
string Person::getName(){
    return myName;
}

int Person::getSalary(){
    return mySalary;
}
void Person::setName(string myName){
    this->myName = myName;
}
void Person::setSalary(int mySalary){
    this->mySalary = mySalary;
}
