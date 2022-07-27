#include <iostream>

int min_element(int array[],int number){
    int min = array[0];
    if (number<1){
        return 0;
    }
    for (int i=0;i<number;i++){
        if (array[i]<min){
            min = array[i];
        }
    }
    
    return min;
}