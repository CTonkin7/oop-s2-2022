#include <iostream>

void transform(int number)
{
    std::cout << "Base 10 = " << number << "\n";

    std::string bin{};

    while( number > 0 ) {
        if(number % 2 == 0){
            bin.insert( bin.begin( ), '0' );
        }else {
            bin.insert( bin.begin( ), '1' );
        }
        number >>= 1;
    }

    std::cout << "Base 2 = " << bin << "\n";
}


int main() {
    int number = 75;
    transform(number);
    return 0;
}