#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <string>
using namespace std;

#include "vegie.h"
#include "hunter.h"

class zoo{
    private:
        string name;
        int number_of_animals;
        animal **animals;
    public:
        zoo();
        ~zoo();
        zoo(string n, int cows, int lions);

        void get_name();
        int get_number_of_animals();
        animal** get_animals();
};

#endif