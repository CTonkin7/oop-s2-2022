#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int number);

int main() {

    std::cout << "The number is: " << count_evens(7) << std::endl;
    return 0;
}