#include <iostream>
#include <cmath>
int median_array(int array[], int n){
    int median =0;

    if (n<1){
        return 0;
    } else if (n % 2 == 0)
        return 0;

    median = array[n/2];

    return median;
}

    
   
    
