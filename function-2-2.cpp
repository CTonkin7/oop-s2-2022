#include <iostream>
#include <cmath>
using namespace std;
 
// Function to convert binary to decimal
int binary_to_int(int binary_digits[], int number_of_digits){
    int binary = 0;
    int temp = 0;

    for (int i=0; i<number_of_digits;i++){
        temp = binary_digits[i] * pow(2,number_of_digits-i-1);
        binary = binary + temp;
        temp = 0;
    }
    return binary;
}
    
 

