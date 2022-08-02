#include <iostream>

extern void print_summed(int array[3][3], int array2[3][3]);

int main(){
    
    int array[3][3] = { {1,2,3}, {12,2,3}, {1,3,6} };
    int array2[3][3] = { {4,2,7}, {2,8,-6}, {11,9,0} };
    print_summed(array,array2);
    return 0;
}



