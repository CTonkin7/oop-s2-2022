#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string myName;
        int mySalary;
        
        Person(int mySalary, string myName);

        void setName(string myName);
        string getName();
        void setSalary(int mySalary);
        int getSalary();
};