#include <iostream>

extern int count_digits(int array[4][4]);

int main(){
    int array[4][4] = { {2,2,4,4}, {9,0,0,1}, {1,3,6,6}, {7,8,8,8} };
    count_digits(array);
    return 0;
}



