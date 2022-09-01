#include <iostream>
#include <string>
#include "Airplane.h"
using namespace std;

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot);

Airplane::void setPilot(Person thePilot){
    this -> thePilot = thePilot;
}

Person getPilot(){
    return thePilot;
}

Airplane::void setCoPilot(Person theCoPilot);
    this -> theCoPilot = theCoPilot;

Person getCoPilot(){
    return theCoPilot;
}

Airplane::void printDetails(){
    cout << callsign << "\n" << thePilot.getName << theCoPilot.getName << "\n";
}