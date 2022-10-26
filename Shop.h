#include <iostream>
#include <string>
#include "Casual.h"
#include "Manager.h"

using namespace std;

class Shop{
    private:
    Shop();

    public:
    Employee** employees;
    int count;
    void addEmployee(Employee *employee);
    Employee **get_employees()
    int get_count() 

    static Shop* createShop(int authority);


}