#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int *readnumbers(){
    int *Array = new int[4];
    for (int i = 0; i < 4; i++){
       	std::cin >> *(Array + i);
    }
    return Array;
}

int secondSmallestSum(int *numbers, int length){
    int perms = 0;
    for (int i=0;i<length;i++){
        perms = perms + length - i;
    }
    int sums[perms];
    int index = 0;

    for (int i=0;i<length;i++){
        for (int j=0;j<length;j++){
            int sum = 0;
            for (int k=i;k<(j+1);k++){
                sum = sum + *(numbers+k);
            }
            if (sum !=0){
            sums[index] = sum;
            index++;  
            }
           
        }
    }
    std::sort(sums, sums + index);    
    int second_smallest = sums[1];
    return second_smallest;
}