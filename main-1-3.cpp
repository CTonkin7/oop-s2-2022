#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int num_count(int[], int,int);

int main() {
    int array[5] = {4,4,11,9,-8};
    std::cout << "The number is: " << num_count(array, 5,4) << std::endl;
    return 0;
}