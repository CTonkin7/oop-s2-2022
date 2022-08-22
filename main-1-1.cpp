#include <iostream>

extern int *readnumbers();
extern void printNumbers(int *numbers, int length);

int main(){
    int *result;
    int length = 10;
    result = readnumbers();
    printNumbers(result, length);
}