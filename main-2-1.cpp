#include <string>
#include <iostream>

using namespace std;

extern void print_binary_str(std::string decimal_number);

int main(){
    std::string decimal_number = "1265";
    print_binary_str(decimal_number);

    return 0;
}