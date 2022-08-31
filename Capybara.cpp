#include <iostream>
#include <string>
#include "Capybara.h"
using namespace std;

Capybara::Capybara(){
    capyName = "No Name";
    capyAge = 0;
}

Capybara::Capybara(string capyName, int capyAge){
    this->capyName = capyName;
    this->capyAge = capyAge;
}
string Capybara::getName(){
    return capyName;
}

int Capybara::getAge(){
    return capyAge;
}
void Capybara::setName(string capyName){
    this->capyName = capyName;
}
void Capybara::setAge(int capyAge){
    this->capyAge = capyAge;
}
