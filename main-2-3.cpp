#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void two_five_nine(int array[], int n);

int main() {
    int array[6] = {2,2,5,9,9,9};
    two_five_nine(array,6);
    return 0;
}