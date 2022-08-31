#include <iostream>
#include <string>
#include "Wagon.h"
using namespace std;

int main(){

    Wagon Wagon1;

    Capybara caleb("caleb",18);
    Wagon1.addCapybara(caleb);

    Capybara Grady("Grady", 100);
    Wagon1.addCapybara(Grady);

    Capybara Ben("Ben", 2);
    Wagon1.addCapybara(Ben);

    Capybara Chris("Chris", 19);
    Wagon1.addCapybara(Chris);

    Capybara James("James", 56);
    Wagon1.addCapybara(James);

    Wagon1.printCapybaras();

    return 0;
}