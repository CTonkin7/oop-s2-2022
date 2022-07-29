#include <iostream>
#include <cmath>

double array_mean(int array[], int n){
    double sum = 0;
    double mean = 0;
    if (n<1){
        return 0.0;
    }
    for (int i=0; i<n; i++){
    sum = sum + array[i];
    }
    mean = sum/n;
    return double(mean);

}
