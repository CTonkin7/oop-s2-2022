#include <iostream>
#include <string>
//#include "Employee.h"
//#include "Casual.h"
#include "Manager.h"

using namespace std;

int main(){
    
    Manager Caleb(30);
    Caleb.set_hoursWorked(8);
    Caleb.set_daysWorked(5);
    cout << Caleb.get_energyLevel() << "%" << endl;
    Caleb.work(60*8);
    cout << Caleb.get_energyLevel() << "%" << endl;
    
    cout << Caleb.pay() << endl;

}
