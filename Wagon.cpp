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

void Wagon::printCapybaras(){
    cout << array[0].getName() << " " << array[0].getAge() << "\n" << endl;
    cout << array[1].getName() << " " << array[1].getAge() << "\n" << endl;
    cout << array[2].getName() << " " << array[2].getAge() << "\n" << endl;
    cout << array[3].getName() << " " << array[3].getAge() << "\n" << endl;
}