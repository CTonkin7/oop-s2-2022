#include <iostream>
using namespace std;

void copy_integers(int old_array[5], int new_array[5], int length){
    int *ptr = old_array;    

    for (int i=0; i<length; i++){
        new_array[i] = *ptr;
        (ptr)++;
    }

    for (int i=0; i<length; i++){
        std::cout<<new_array[i] << " ";
    }

}
