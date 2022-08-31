#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main(){
    Person grady(1000, "grady");
    cout << grady.getName() << endl;
    cout << grady.getSalary() << endl;

    Person ben(3, "ben");
    cout << ben.getName() << endl;
    cout << ben.getSalary() << endl;

    Person Alice(30000, "Alice");
    cout << Alice.getName() << endl;
    cout << Alice.getSalary() << endl;

    Person Calvin(50000, "Calvin");
    cout << Calvin.getName() << endl;
    cout << Calvin.getSalary() << endl;

}