

#include <iostream>
#include <string>
#include <array>
#include "Clinic.h"
using namespace std;

int main(){
    Cage Cage1("blake", 2345);
    Cage Cage2("Jack", 3245);
    Cage Cage3("Harley", 7488);
    
    Clinic Clinic1("vet", 5);
    
    Clinic1.add_cage(Cage1); 
    Clinic1.add_cage(Cage2); 
    Clinic1.add_cage(Cage3); 

    Clinic1.get_number_of_cages();

    Clinic1.get_cages();    

}


