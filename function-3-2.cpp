#include <iostream>
using namespace std;

int *readnumbers(){
    int *Array = new int[10];
    for (int i = 0; i < 10; i++){
       	std::cin >> *(Array + i);
    }
    return Array;
}

bool equalsArray(int *numbers1, int *numbers2, int length){
    bool result = true;
    for (int i =0; i<length;i++){
        if ( *(numbers1) != *(numbers2)){
            result = false;
        }
        (numbers1 + 1);
        (numbers2 + 1);
    }
    return result;
}

int *reverseArray(int *numbers1, int length){
    int *reverse_array = new int[10];
    
    for (int i=0; i<10; i++){
        *(reverse_array+i) = *(numbers1+9-i);   
    }
    
    return reverse_array;
}