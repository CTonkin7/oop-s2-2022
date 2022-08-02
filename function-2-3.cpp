#include <iostream>

extern bool is_palindrome(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int sum_if_palindrome(int integers[], int length){
    int sum = 0;
    if(is_palindrome(integers,length)!=0){
        sum = sum_array_elements(integers,length);
    } else {
        return -2;
    }
    return sum;
}

bool is_palindrome(int integers[], int length){
    bool result = true;
    
    if (length<=0){
        result = false;
        return result;
    }
    if (length % 2 == 1){
        for (int i = 1; i<(length/2+1);i++){
            if (integers[i]<integers[i-1]){
                return false;
            }
        }     
    } else {
        for (int i = 1; i<(length/2);i++){
            if (integers[i]<integers[i-1]){
                return false;
            }
        }    
    }
    for (int i =0; i<length;i++){
        if (integers[i] != integers[length-i-1]){
            return false;
        }
    }
    return result;
}

int sum_array_elements(int integers[], int length){
    int sum = 0;
    int result = 0;
    if (length<=0){
        result = -1;
        return result;
    }
    for (int i=0; i<length;i++){
        sum = sum + integers[i];
    }
    return sum;
}