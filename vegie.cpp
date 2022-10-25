#include <iostream>
#include <string>
#include "vegie.h"

using namespace std;


vegie::vegie(){
    name = "";
    volume = 0;
    favourite_food = "";
}
vegie::vegie(string n,int v){
    name = n;
    volume = v;
}

void vegie::set_name(string inputName){
    name = inputName;
}

string vegie::get_favourite_food(){
    return favourite_food;
}
void vegie::set_favourite_food(string food){
    favourite_food = food;
}