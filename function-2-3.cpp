#include <iostream>
#include <cmath>

extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);

int palindrome_sum(int integers[], int length){
    int sum = 0;
    if(is_array_palindrome(integers,length)==1){
        sum = sum_integers(integers,length);
    } else {
        sum = -2;
        return sum;
    }
    return sum;
}
bool is_array_palindrome(int integers[], int length){
    int result = true;
    if (length<=0){
        result = false;
        return result;
    }
    if (length % 2 == 0){
        for (int i=0; i<length/2;i++){
            if (integers[i] < integers[i-1]){
                result = false;
                return result;
            }
        }
    }
    if (length % 2 != 0){
        for (int i=0; i<(length/2);i++){
            if (integers[i] > integers[i+1]){
                result = false;
                return result;
            }
        }
    }
    
    for (int i=0; i<length;i++){
        if (integers[i] != integers[length-i-1]){
            result = false;
            return result;
        }
    }
    return result;
}


int sum_integers(int integers[], int length){
    int sum = 0;
    for (int i=0; i<length;i++){
        sum = sum + integers[i];
    }
    return sum;
}