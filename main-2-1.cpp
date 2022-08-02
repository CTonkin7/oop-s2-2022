#include <string>
#include <iostream>
using namespace std;

extern void print_binary(std::string decimal_number);

int main(){
    std::string decimal_number = "16.1";
    print_binary(decimal_number);
    return 0;



}