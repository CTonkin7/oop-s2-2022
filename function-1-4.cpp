#include <iostream>
using namespace std;

void copy_doubles(double *old_array, double *new_array, int length){
    double *ptr = old_array;    

    for (int i=0; i<length; i++){
        new_array[i] = *ptr;
        (ptr)++;
    }

    for (int i=0; i<length; i++){
        std::cout<<new_array[i] << " ";
    }

}
