#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double sum_even(double array[], int n);

int main() {
    double array[6] = {1,22,10,44,7,12};
    std::cout << "The sum is " << sum_even(array,6) << std::endl;

    double array2[8] = {-12,63,82,12,36,11,-9,78};
    std::cout << "The sum is " << sum_even(array2,8) << std::endl;

    double array3[7] = {1,2,81,-4,-23,19,0};
    std::cout << "The sum is " << sum_even(array3,7) << std::endl;
    
    return 0;
}
   
