#include <iostream>
#include <string>
#include "Capybara.h"
using namespace std;

int main(){
    Capybara caleb;
    cout << caleb.getName() << endl;
    cout << caleb.getAge() << endl;

    Capybara Grady("Grady", 100);
    cout << Grady.getName() << endl;
    cout << Grady.getAge() << endl;

    Capybara Ben("Ben", 2);
    cout << Ben.getName() << endl;
    cout << Ben.getAge() << endl;

    Capybara Chris("Chris", 19);
    cout << Chris.getName() << endl;
    cout << Chris.getAge() << endl;
    return 0;
}