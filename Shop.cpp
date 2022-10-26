#include <iostream>
#include <string>
#include "Shop.h"

using namespace std;

void Shop::addEmployee(Employee *employee){
    Employee[count] = employee;
}
Employee** Shop::get_employees(){
    return employees;
}
int Shop::get_count(){
    return count;
}