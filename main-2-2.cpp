#include <iostream>

extern int max_sub_sum(int *nums,int length);

int main(){
    int nums[8] = {23,62,-20,26,82,9,21,-3};
    int length = 8;
    std::cout<< max_sub_sum(nums,length) << std::endl;
}