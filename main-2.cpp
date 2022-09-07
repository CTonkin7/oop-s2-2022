#include <iostream>
#include <string>
#include "Wagon.h"
using namespace std;

Wagon::Wagon(){
    index = 0;
    Capybara array[4];
}

bool Wagon::addCapybara(Capybara newCapy){
    if (index > 3){
        return false;
    }else{
        array[index] = newCapy;
        index++;
        return true;
    }
}

void Wagon::emptyWagon(){
    index = 0;
}

void Wagon::printCapybaras(){
    for (int i=0; i<index; i++){
        cout << array[i].getName() << " " << array[i].getAge() << "\n" << endl;
    }
}