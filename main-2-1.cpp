#include <iostream>
#include <string>
//#include "Employee.h"
#include "Casual.h"

using namespace std;

int main(){
    
    Casual Caleb(20);
    cout << Caleb.get_energyLevel() << "%" << endl;
    Caleb.set_dayCount(0);
    Caleb.work(60);
    cout << Caleb.get_energyLevel() << "%" << endl;
    Caleb.takeABreak(10);
    cout << Caleb.get_energyLevel() << "%" << endl;
    Caleb.endWorkDay();
    cout << Caleb.pay() << endl;

}
