#include <iostream>

extern int *readnumbers();
extern int secondSmallestSum(int *numbers, int length);

int main(){
    int *array;
    int length = 4;
    array = readnumbers();
    std::cout << "Second Smallest Sum is " << secondSmallestSum(array, length)<< std::endl;
}