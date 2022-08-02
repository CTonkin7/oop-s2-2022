#include <iostream>

extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);



int sum_min_max(int integers[], int length){
   
}

int array_min(int integers[], int length){
    int min = integers[0];
    for (int i=0;i<length;i++){
        if(integers[i]>integers[i+1]){
            min = integers[i+1];
        }
    }
}

int array_max(int integers[], int length){
    int min = integers[0];
    for (int i=0;i<length;i++){
        if(integers[i]<integers[i+1]){
            min = integers[i+1];
        }
        
    }
}