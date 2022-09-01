#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Airplane{
    string thePilot;
    string theCoPilot;
    string callsign;
    
    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);
    Person getPilot();
    void setCoPilot(Person theCoPilot);
    Person getCoPilot();
    void printDetails(); 

};