#include <iostream>
#include <string>
#include "Cage.h"

using namespace std;

class Clinic{
    private:
    int name;
    int max_size;
    int number_cages;
    int index = 0;
    Cage array[5];

    public:
    Clinic(); 
    Clinic(std::string name, int max_size);  
    int get_number_of_cages();
    std::string get_name();
    Cage *get_cages();
    bool add_cage(Cage new_cage);  
    //~Clinic();

};