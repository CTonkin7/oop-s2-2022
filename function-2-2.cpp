#include <iostream>

int max_sub_sum(int *nums,int length){
    int maxsum = 0;
    int *ptr_array = nums;
    int index = 1;

    for (int i=0; i<length;i++){
        if (ptr_array < 0){
            *(ptr_array+1);
        } else {
            index = 0;
        }
    }

    for (int i=0; i<length; i++){
        for (int j=0; j<length; j++){
            int sum = 0;
            for (int k = i; k < (j+1); k++){
                sum = sum + *(ptr_array+k);
            }
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    return maxsum;

}
