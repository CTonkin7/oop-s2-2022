#include <iostream>
using namespace std;

void multiples_of_seven(int *nums,int length){
    int *ptr = nums;
    int sevens_array[length] = {0};    
    int index = 0;

    for (int i=0; i<length; i++){

        if (*ptr % 7 == 0){
            sevens_array[index] = *ptr;
            index++; 
        }
        (ptr)++;
    }

    for (int i=0; i<length; i++){
        if(sevens_array[i] != 0){
        std::cout<<sevens_array[i] << " ";
        }
    }

}
