#include <iostream>
#include <string>
#include "hunter.h"
using namespace std;

hunter::hunter(string n, int v){
    name = n;
    volume = v;
}

void hunter::set_kills(int inputKills){
    kills = inputKills;
}
string hunger::get_name(){
    return cout << "Hunter: " << name;
}

hunter::nextID = 1000;
