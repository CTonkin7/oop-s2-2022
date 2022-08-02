#include <iostream>

void print_binary(std::string decimal_number){
    int decimal = 0;
    int binary = 0;
    int remainder = 1;
    int product = 1;
    decimal = stoi(decimal_number);
    while (decimal != 0) {
    remainder = decimal % 2;
    binary = binary + (remainder * product);
    decimal = decimal / 2;
    product *= 10;
  }
  std::cout << "The number in the binary form is: " << binary << "\n" ;
   
}
