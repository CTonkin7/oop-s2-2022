#include <iostream>


int main(){
    int a[5] = {1,2,3,4,5};
    int *b;
    b = a;
    
    for (int i=0;i<5;i++){
        std::cout<< (*b) << ' ';
        (*b) = (*b) +  1;
    }
    std::cout<< "" <<std::endl;


}