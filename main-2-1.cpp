#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int min_element(int array[], int n);

int main() {
    int array[5] = {1,2,3,4,5};
    std::cout << "The number is: " << min_element(array,5) << std::endl;
    return 0;
}