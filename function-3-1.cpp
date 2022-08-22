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

    
}