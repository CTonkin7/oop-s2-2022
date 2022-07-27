#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int max_element(int array[], int n);

int main() {
    int array[6] = {21,-3,11,103,2,34};
    std::cout << "The number is: " << max_element(array,6) << std::endl;
    return 0;
}