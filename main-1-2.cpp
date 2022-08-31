#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main(){
    Person grady(1000, "grady");
    cout << grady.getName() << endl;
    cout << grady.getSalary() << endl;

}