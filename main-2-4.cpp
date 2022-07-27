#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern bool is_ascending(int array[], int n);

int main() {
    int array[6] = {2,11,14,20,100,123};
    if (is_ascending(array,6)==0){
        std::cout << "The result is false " << std::endl;
    } else{
        std::cout << "The result is true " << std::endl;
    }
    return 0;
}