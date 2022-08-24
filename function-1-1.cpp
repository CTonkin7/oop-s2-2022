#include <iostream>
#include <cmath>

void print_ascending(int *vals, int len){
    int *ptr = vals;
    std::cout << *(ptr) << " ";
    (ptr++);
    for (int i=1; i<len;i++){
        if (*(ptr) >= *(ptr -1 )){
            std::cout << *(ptr) << " ";
            (ptr++);
        } else {
            break;
        }
    }
}
