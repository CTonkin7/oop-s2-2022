#include <iostream>

int size_of_variable_star_t(){
    int *t = new int;
    int size = sizeof(t);
    return size;
}