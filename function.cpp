#include <iostream>
#include <string>
#include "function.h"
using namespace std;
    

Musician::Musician(){
    instrument = "null";
    experience = 0;
}
Musician::Musician(std::string instrument, int experience){
    this->instrument = instrument;
    this->experience = experience;
}
string Musician::get_instrument(){
    return instrument;
}
int Musician::get_experience(){
    return experience;
}
