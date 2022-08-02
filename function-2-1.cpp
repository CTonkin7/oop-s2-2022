#include <iostream>

void print_binary(std::string decimal_number) {
    
    int number = stoi(decimal_number);
    int binaryNum[32];

    int i = 0;
    while (number>0){
        binaryNum[i] = number % 2;
        number = number/2;
        i++;
    }
    for (int j = i-1; j >=0; j--){
        std::cout << binaryNum[j];
    }
}


