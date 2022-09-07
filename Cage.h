#include <iostream>
#include <string>

using namespace std;

class Cage{
    private:
    string name;
    int ID;

    public:
    Cage();  
    Cage(std::string newName, int newNumber); 
    std::string get_name();  
    int get_IDnum();         
    //~Cage();                       


};