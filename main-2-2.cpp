#include <iostream>


int main(){
    int a = 10;
    int *b;
    b = &a;

    std::cout << b << std::endl;
    std::cout << *b << std::endl;


}