#include <iostream>

extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *readnumbers();

int main(){
    int *array1;
    int *array2;
    int length = 10;
    array1 = readnumbers();
    array2 = readnumbers();
    if ((equalsArray(array1, array2,length)) == 1 ){
        std::cout<< "true" << std::endl;
    } else {
        std::cout<< "false" << std::endl;
    }

    delete [] array1;
    delete [] array2;
}