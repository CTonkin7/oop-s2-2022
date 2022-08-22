#include <iostream>

extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *readnumbers();

int main(){
    int *result;
    int length = 10;
    result = readnumbers();
    hexDigits(result,length);
}