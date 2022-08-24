#include <iostream>

int next_match_count(int vals[], int length){
    int count = 0;
    for (int i=0; i<length;i++){
        if (i != 5){
            if (vals[i] == vals[i+1]){
                count++;
            }   
        }
    }
    return count;
}