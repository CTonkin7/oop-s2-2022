#include <iostream>
#include <string>
#include "Wagon.h"
using namespace std;

Wagon::Wagon(){
    index = 0;
    Capybara array[4];
}

bool Wagon::addCapybara(Capybara newCapy){
    if (index > 4){
        cout << "Wagon is full" << endl;
        return false;
    }else{
        array[index] = newCapy;
        index++;
        return true;
    }
}

void Wagon::emptyWagon(){
    delete[] array;
    Capybara array[4];
}

void Wagon::printCapybaras(){
    cout << array[1].getName() << " " << array[1].getAge() << "\n" << endl;
    cout << array[2].getName() << " " << array[2].getAge() << "\n" << endl;
    cout << array[3].getName() << " " << array[3].getAge() << "\n" << endl;
    cout << array[4].getName() << " " << array[4].getAge() << "\n" << endl;
}