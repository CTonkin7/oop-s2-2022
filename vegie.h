#ifndef VEGIE_H
#define VEGIE_H

#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

class vegie: public animal{
    private:
    static int nextID;
    
    public:
        vegie();
        vegie(string n, int v);
        string favourite_food;
        void set_name(string n);
        void get_name();
        string get_favourite_food();
        void set_favourite_food(string food);
    
};

#endif