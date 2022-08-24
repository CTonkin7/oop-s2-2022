#include <iostream>
using namespace std;

int* matrix_min_max(int **vals,int num_rows, int num_cols){
    int **ptr = vals;
    //std::cout<< **ptr <<std::endl;
    int max = **ptr;
    int min = **ptr;
    //(ptr++);
    //std::cout<< **ptr <<std::endl;
    for (int i=0; i< num_rows; i++){
        for (int j=0; j< num_cols;j++){
            if (**ptr > max ){
                max = **ptr;
            } else if((**ptr < min)){
                min = **ptr; 
            }
            (ptr+i);
        }
    }
    cout << max << endl;
    cout << min << endl;
    int *max_min = new int[2];

    *max_min = min;
    *(max_min++) = max;
    
    return max_min;
}