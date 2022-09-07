#include <iostream>
#include <string>
#include "Clinic.h"
#include <array>

using namespace std;

Clinic::Clinic(){
    index = 0;
    Cage array[5];
}

Clinic::Clinic(std::string name, int max_size){
    this->name = name;
    this->max_size = max_size;
}

int Clinic::get_number_of_cages(){
    return number_cages;
}

string Clinic::get_name(){
    return name;
}

//Cage * get_cages(){
  //  return array;
//}

bool Clinic::add_cage(Cage new_cage){
    if (number_cages < max_size){
        array[index] = new_cage;
        index++;
        number_cages++;
        return true;
    } else {
        return false;
    }
}

~Clinic(){
    delete[] array;
}

