#include <iostream>
#include <string>
#include "Airplane.h"
using namespace std;

int main(){
    Person thePilot1(1000, "James");
    Person thePilot2(100, "David");
    Person thePilot3(10000, "Grady");

    Airplane Airplane1("Maverick",thePilot1,thePilot2);
    Airplane1.printDetails();

    Airplane1.setPilot(thePilot3);
    Airplane1.setCoPilot(thePilot1);

    Airplane1.printDetails();
}