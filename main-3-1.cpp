#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern bool is_fanarray(int array[], int n);

int main() {
    int array[5] = {1,2,3,2,1};
    if (is_fanarray(array,5)==0){
        std::cout << "The result is false " << std::endl;
    } else{
        std::cout << "The result is true " << std::endl;
    }
    return 0;
}
   
