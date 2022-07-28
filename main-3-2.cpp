#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int median_array(int array[], int n);

int main() {
    int array[9] = {21,-42,13,22,-19,1,21,207,39};
    std::cout << "The median is " << median_array(array,9) << std::endl;
    
    return 0;
}
   
