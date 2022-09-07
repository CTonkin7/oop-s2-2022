#ifndef CLINIC_H
#define ClINIC_H

#include <iostream>
#include <string>
#include "Cage.h"

using namespace std;

class Clinic{
    private:
    string name;
    int max_size;
    int number_cages=0;
    int index = 0;
    Cage array[5];

    public:
    Clinic(); 
    Clinic(std::string name, int max_size);  
    int get_number_of_cages();
    string get_name();
    Cage *get_cages();
    bool add_cage(Cage new_cage);  
    ~Clinic();

};

#endif