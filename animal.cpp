#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

    animal::animal(){
        name = "";
        volume = 0;
    }
    animal::animal(string n, int v){
        name = n;
        volume = v;
    }
    void animal::set_name(string n){
        name = n;
        cout << name << endl;
    }
    void animal::set_volume(int inputvolume){
        volume = inputvolume;
    }

    int animal::get_volume(){
        return volume;
    }
    int animal::get_ID(){
        return animalID;
    }
