#include <iostream>
#include <string>
#include "Wagon.h"
#include "Capybara.h"
using namespace std;

int main(){

    Wagon Wagon1();

    Wagon caleb;
    caleb.addCapybara();

    Wagon Grady("Grady", 100);
    Grady.addCapybara();

    Wagon Ben("Ben", 2);
    Ben.addCapybara();

    Wagon Chris("Chris", 19);
    Chris.addCapybara();

    Wagon James("James", 56);
    James.addCapybara();

    Wagon printCapybaras();

    return 0;
}