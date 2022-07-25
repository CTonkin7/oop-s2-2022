#include <iostream>

int count(int array[], int n){
    int count=0;
    for (int i=0; i<5; i++){
        if ((array[i] % 2)==0){
            count++;
        }
    }
    return count;

}
