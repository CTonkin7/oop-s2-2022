#include <iostream>

int* matrix_min_max(int **vals,int num_rows, int num_cols){
    int **ptr = vals;
    int max = **ptr;
    int min = **ptr;
    for (int i=0; i< num_rows; i++){
        for (int i=0; i< num_cols;i++){
            if (**(ptr) > max ){
                max = **(ptr);
            } else if((**ptr < min)){
                min = **(ptr); 
            }
            (**ptr + 1);
        }
    }
    int *max_min = new int[2];
    *max_min = max;
    *(max_min+1) = min;
    return max_min;
}