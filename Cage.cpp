#include <iostream>
#include <string>
#include "Cage.h"
using namespace std;

Cage::Cage(){
    ID = 0;
    name = "";
} 

Cage::Cage(std::string newName, int newNumber){
    name = newName;
    ID = newNumber;
}

string Cage::get_name(){
    return name;
} 

int Cage::get_IDnum(){
    return ID;
}         

