#include <iostream>

extern void hexDigits(int *numbers, int length);
extern int *readnumbers();
int main(){
    int *result;
    int length = 10;
    result = readnumbers();
    hexDigits(result,length);
}