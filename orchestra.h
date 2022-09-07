#include <iostream>
#include <string>
#include "Musician.h"

using namespace std;

class orchestra{
    private:
    int size;
    Musician array[5];

    public:
    Orchestra();
    Orchestra(int size);  
    int get_current_number_of_members(); 
    bool has_instrument(std::string instrument);
    Musician *get_members();  
    bool add_musician(Musician new_musician);
    ~Orchestra();


};