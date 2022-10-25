#include <iostream>
#include <string>
using namespace std;

#include "zoo.h"

zoo::zoo(){
    name="";
    number_of_animals=0;
}

zoo::~zoo(){
    delete[] animals;
    cout << "Zoo destructor executed" << endl;
}

zoo::zoo(string n, int cows, int lions){
    name = n;
    number_of_animals = cows+lions;

    animals = new animal*[number_of_animals];
    for(int i=0;i<number_of_animals;i++){
        if(i<cows){
            animals[i] = new vegie;
            animals[i]->set_name("Daisy");
            animals[i]->set_volume(100);
        }else{
            animals[i] = new hunter;
            animals[i]->set_name("Clarence");
            animals[i]->set_volume(50);
        }
    }
}

void zoo::get_name(){
    cout << "Name: " << name << endl;
}

int zoo::get_number_of_animals(){
    return number_of_animals;
}

animal** zoo::get_animals(){
    return animals;
}