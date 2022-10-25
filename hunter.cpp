#include <iostream>
#include <string>
#include "hunter.h"
using namespace std;

hunter::hunter(){
    name = "";
    volume = 0;
    kills = 0;
}
hunter::hunter(string n, int v){
    name = n;
    volume = v;
}

void hunter::set_kills(int inputKills){
    kills = inputKills;
}
void hunter::set_name(string n){
    name = n;
}
void hunter::get_name(){
    cout << "Hunter: " << name;
}

int hunter::get_kills(){
    return kills;
}

