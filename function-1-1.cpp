#include <iostream>
using namespace std;

int *readnumbers(){
    int *Array = new int[10];
    for (int i = 0; i < 10; i++){
       	std::cin >> *(Array + i);
    }
    return Array;
}

void printNumbers(int *numbers, int length){
    for (int i=0; i<length;i++){
        std::cout << i+1 << " " << *(numbers + i) << std::endl;
    }
}