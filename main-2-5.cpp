#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern bool is_descending(int array[], int n);

int main() {
    int array[6] = {24,100,3,-1,-10,-101};
    if (is_descending(array,6)==0){
        std::cout << "The result is false " << std::endl;
    } else{
        std::cout << "The result is true " << std::endl;
    }
    return 0;
}