#include <iostream>

int main(){
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9} };
    int *b;
    b = *a;
    for (int j=0;j<3;j++){
        for (int i=0;i<3;i++){
        std::cout<< (*b) << ' ';
        (*b) = (*b) +  1;
        }
    std::cout<< "" <<std::endl;
    }
}