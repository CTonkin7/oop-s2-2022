#include <iostream>
#include <string>
#include "Cage.h"
using namespace std;

int main(){
    Cage animal1("ted",98);
    cout << animal1.get_name() << endl;
    cout << animal1.get_IDnum() << endl;

    Cage animal2("jack",42828);
    cout << animal2.get_name() << endl;
    cout << animal2.get_IDnum() << endl;

    Cage animal3("alice",495);
    cout << animal3.get_name() << endl;
    cout << animal3.get_IDnum() << endl;

}