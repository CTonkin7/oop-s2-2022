#include <iostream>


int main(){
    int a = 42;
    int *b;
    b = &a;
    (*b) = (*b) + 5;
    std::cout << *b << std::endl;

    (*b) = (*b) -2;
    std::cout << *b << std::endl;


}