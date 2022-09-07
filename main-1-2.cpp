#include <iostream>
#include <string>
#include "Clinic.h"
using namespace std;

int main(){
    Clinic Clinic1("vet", 5);
    Cage Cage1("blake", 123);
    Cage Cage2("blake", 123);
    Cage Cage3("blake", 123);

    add_cage(Cage Cage1); 
    add_cage(Cage Cage2); 
    add_cage(Cage Cage3); 

    get_cages();

}