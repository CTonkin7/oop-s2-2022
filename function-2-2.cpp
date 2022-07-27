#include <iostream>

int max_element(int array[],int number){
    int max = array[0];
    if (number<1){
        return 0;
    }
    for (int i=0;i<number;i++){
        if (array[i]>max){
            max = array[i];
        }
    }
    
    return max;
}