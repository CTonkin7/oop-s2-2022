#include <iostream>
#include <string>
//#include "Employee.h"
//#include "Casual.h"
#include "Manager.h"

using namespace std;

int main(){
    
    Manager Caleb(40);
    Caleb.set_daysWorked(1);
    Caleb.set_hoursWorked(8);
  
    cout << Caleb.get_hoursWorked() << endl;
    cout << Caleb.get_daysWorked() << endl;
    cout << Caleb.get_energyLevel() << "%" << endl;
    
    
    cout << Caleb.pay() << endl;

}
