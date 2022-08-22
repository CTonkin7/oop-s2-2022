#include <iostream>

extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *reverseArray(int *numbers1, int length);
extern int *readnumbers();

int main(){
    int *array1;
    int *reverse;
    int length = 10;
    array1 = readnumbers(); 
    reverse = reverseArray(array1,10);


    if ((equalsArray(array1,reverse,length)) == 1 ){
        std::cout<< "true" << std::endl;
    } else {
        std::cout<< "false" << std::endl;
    }
    delete [] array1;
    delete [] reverse;
    
}