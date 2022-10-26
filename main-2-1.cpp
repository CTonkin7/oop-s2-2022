#include <iostream>
#include <string>
#include "animal.h"
#include "hunter.h"
#include "zoo.h"
using namespace std;

int main(){
    hunter Lion("Alex",100);
    Lion.get_name();
    cout << "\n";
    Lion.set_kills(1);
    cout << Lion.get_kills() << endl;
    Lion.set_name("Alex the Lion");
    Lion.get_name();
    cout << "\n";
    Lion.set_volume(50);
    cout << Lion.get_volume() << endl;

    zoo zoo1("blah", 5, 8);
    index = zoo1.get_number_of_animals();
    cout << index;
    cout << zoo1.get_animals() <<endl;



    return 0;
}