#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double weighted_average(int array[], int n);

int main() {
    int array[9] = {1,2,1,4,1,3};
    std::cout << "The weighted Average is " << weighted_average(array,6) << std::endl;
    
    return 0;
}
   
