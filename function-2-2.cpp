#include <iostream>
#include<cmath>

int bin_to_int(int binary_digits[], int number_of_digits){
    int integer;
    int temp;
    for (int i=0;i<number_of_digits;i++){
        temp = binary_digits[i]*pow(2,number_of_digits-i-1);
        integer = integer + temp;
    }
    return integer;
}