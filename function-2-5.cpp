#include <iostream>

bool is_descending(int array[], int n){
    bool result = true;
    
    if (n<0){
        result = false;
        return result;
    }
    for (int i =1; i<n;i++){
        if (array[i]>array[i-1]){
            return false;
        }
    }
    
    return result;
}