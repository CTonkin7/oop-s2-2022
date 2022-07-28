#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void print_pass_fail(char grade);

int main() {
    print_pass_fail('A');
    print_pass_fail('D');
    print_pass_fail('L');
    
    return 0;
}
   
