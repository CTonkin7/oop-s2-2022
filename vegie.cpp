#include <iostream>
#include <string>
#include "vegie.h"
using namespace std;

vegie::vegie(string n,int v){
    name = n;
    volume = v;
}

vegie::nextID = 100;

string vegie::get_name(){
    return cout << "Safe: " << name;
}

string vegie:: get_favourite_food(){
    return favourite_food;
}
void vegie:: set_favourite_food(string food){
    favourite_food = food;
}