#include <iostream>
#include <string>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
using namespace std;

int main(){
    vegie cow("moomoo",75);
    cow.get_name();
    //cout << "\n";
    cow.set_favourite_food("grass");
    cout << cow.get_favourite_food() << endl;
    cow.set_name("poopoo");
    cow.get_name();
    //cout << "\n";
    cow.set_volume(50);
    cout << cow.get_volume() << endl;
    return 0;
}