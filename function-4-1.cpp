#include <iostream>

int* matrix_min_max(int **vals,int num_rows, int num_cols){
    int **ptr = vals;
    std::cout<< **ptr <<std::endl;
    int max = **ptr;
    int min = **ptr;
    //(ptr++);
    //std::cout<< **ptr <<std::endl;
    for (int i=0; i< num_rows; i++){
        for (int j=0; j< num_cols;j++){
            if (**(ptr) > max ){
                max = **(ptr);
                (ptr++);
            } else if((**(ptr) < min)){
                min = **(ptr); 
                (ptr++);
            }
        }
    }
    int *max_min = new int[2];
    *max_min = min;
    *(max_min++) = max;
    return max_min;
}