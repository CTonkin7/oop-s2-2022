#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array1[5] = {4,4,11,9,-8};
    int array2[5] = {13,6,-22,-2,9};
    std::cout << "The number is: " << sum_two_arrays(array1, array2,5) << std::endl;
    return 0;
}