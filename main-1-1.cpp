#include <iostream>

extern void print_ascending(int *vals, int len);

int main(){
    int vals[9] = {1,2,3,4,5,4,3,2,1};
    int len = 9;
    print_ascending(vals,len);
}