#include <iostream>
#include <string>
#include <array>
#include "Clinic.h"
using namespace std;

int main(){
    Clinic Clinic1("vet", 5);
    Cage Cage1("blake", 123);
    Cage Cage2("blake", 123);
    Cage Cage3("blake", 123);

    Clinic add_cage(Cage Cage1); 
    Clinic add_cage(Cage Cage2); 
    Clinic add_cage(Cage Cage3); 

    Clinic get_number_of_cages();

    Cage get_cages();
    
    

}

