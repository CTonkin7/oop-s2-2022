#include <iostream>
#include <string>
#include "function.h"
using namespace std;
    
int main(){
    Musician musician1("violin", 3);

    cout << musician1.get_instrument() << endl;
    cout << musician1.get_experience() << endl;

    Musician musician2();

    cout << musician2.get_instrument() << endl;
    cout << musician2.get_experience() << endl;

    Musician musician3("guitar", 10);

    cout << musician3.get_instrument() << endl;
    cout << musician3.get_experience() << endl;


}
