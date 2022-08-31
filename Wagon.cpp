#include <iostream>
#include <string>
#include "Wagon.h"
using namespace std;

Wagon::Wagon(){

}

bool Wagon::addCapybara(Capybara newCapy){
    result = true;

    array[index] = newCapy;
    index++;
    
    if (index > 4){
        cout << "Wagon is full" << endl;
        result = false;
    }
    return result
}

void Wagon::emptyWagon(){
    array = {0};
}

void Wagon::printCapybaras(){
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl;
}