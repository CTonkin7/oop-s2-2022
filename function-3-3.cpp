#include <iostream>
#include <cmath>
#include <algorithm>

double weighted_average(int array[], int n){
    double weighted_average = 0;
    double tempweighted = 0;

    if (n<1){
        return 0;
    }
    for (int i=0; i<n;i++){
        double tempsum = 0;
        for (int j=0; j<n; j++){
            if (array[i] == array[j]){
                tempsum++;
            }
        }
        weighted_average = weighted_average + double(array[i]*(tempsum/n));
    }
    return weighted_average;
}