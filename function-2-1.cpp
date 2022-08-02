#include <iostream>

void print_binary(std::string decimal_number)
{
    int number = 0;
    std::string bin{};
    number = stoi(decimal_number);
    while( number > 0 ) {
        if(number % 2 == 0){
            bin.insert( bin.begin( ), '0' );
        }else {
            bin.insert( bin.begin( ), '1' );
        }
        number >>= 1;
    }

    std::cout << bin << "\n";
}


