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
    
    Clinic add_cage(Cage Cage1); 
    Clinic add_cage(Cage Cage2); 
    Clinic add_cage(Cage Cage3); 

    Clinic get_number_of_cages();

    Cage get_cages();    

}


