#ifndef HUNTER_H
#define HUNTER_H

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class hunter: public animal{
    public:
    hunter();
    hunter(string n, int v);
    int kills;
    int get_kills();
    void set_kills(int inputKills);
    void set_name(string n);
    void get_name();

    private:
    static int nextID;
};

#endif