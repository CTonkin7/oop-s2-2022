#include <iostream>
using namespace std;

extern void multiples_of_seven(int *nums,int length) ;

int main(){
    int nums[5] = {2,7,4,14,21};
    int length = 5;
    multiples_of_seven(nums,length);
}