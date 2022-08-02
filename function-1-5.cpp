#include <iostream>

void print_summed(int array[3][3], int array2[3][3]){
    int summed_array[3][3] = {0};
    for (int i = 0; i<3 ; i++){
        for (int j = 0; j<3 ; j++){
            summed_array[i][j] = array[i][j] + array2[i][j];
    }
}
    for (int i = 0; i<3 ; i++){
        for (int j = 0; j<3; j++){
            if (j!=2){
               std::cout << summed_array[i][j] << ' '; 
            } else{
                std::cout << summed_array[i][j];
            }
            
        }
        std::cout << "" << std::endl;
    }
}