#include <iostream>
#include <cmath>

bool is_fanarray(int array[], int n){
    bool result = true;
    
    if (n<0){
        result = false;
        return result;
    }
    if (n % 2 == 1){
        for (int i = 1; i<(n/2+1);i++){
            if (array[i]<array[i-1]){
                return false;
            }
        }     
    } else {
        for (int i = 1; i<(n/2);i++){
            if (array[i]<array[i-1]){
                return false;
            }
        }    
    }
    
    for (int i =0; i<n;i++){
        if (array[i] != array[n-i-1]){
            return false;
        }
    }
    
   
    
    return result;
}