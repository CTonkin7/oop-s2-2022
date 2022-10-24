#include <iostream>
#include <string>
#include "animal.h"
using namespace std;


    animal::animal(string n, int v){
        name = n;
        volume = v;
    }
    void animal::set_name(string){

    }
    void animal::set_volume(int inputvolume){
        volume = inputvolume;
    }

    string animal::get_name{
        return name;
    }

    int get_volume{
        return volume;
    }
    int get_ID{
        return animalID;
    }
