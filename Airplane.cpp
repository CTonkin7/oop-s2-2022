#include <iostream>
#include <string>
#include "Airplane.h"
using namespace std;

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
    this->thePilot = thePilot;
    this->callsign = callsign;
    this->theCoPilot = theCoPilot;
}
    
void Airplane::setPilot(Person thePilot){
    this->thePilot = thePilot;
}

Person Airplane::getPilot(){
    return thePilot;
}

void Airplane::setCoPilot(Person theCoPilot){
    this->theCoPilot = theCoPilot;
}
    
Person Airplane::getCoPilot(){
    return theCoPilot;
}

void Airplane::printDetails(){
    cout << this->callsign << "\n" << this->thePilot.getName() << "\n" << this->theCoPilot.getName() << "\n";
}