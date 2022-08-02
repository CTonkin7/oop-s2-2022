#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);


int main(){
    int number_of_digits = 8;
    int binary_digits[number_of_digits] = {1,0,1,0,1,0,0,1};
    std::cout << binary_to_int(binary_digits, number_of_digits) << std::endl;

    int number_of_digits2 = 4;
    int binary_digits2[number_of_digits] = {1,1,0,0};
    std::cout << binary_to_int(binary_digits2, number_of_digits2) << std::endl;
}