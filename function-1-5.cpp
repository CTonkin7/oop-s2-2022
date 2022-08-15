#include <iostream>

int size_of_array_arr(){
    int *arr = new int[3];
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int size = sizeof(arr)*3;
    return size;
}