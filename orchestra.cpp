#include <iostream>
#include <string>
#include "orchestera.h"

using namespace std;

Orchestra();
Orchestra(int size);  
int get_current_number_of_members(); 
bool has_instrument(std::string instrument);
Musician *get_members();  
bool add_musician(Musician new_musician);
~Orchestra();