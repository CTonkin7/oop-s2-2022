#include <iostream>

extern bool is_array_palindrome(int integers[], int length);
extern int palindrome_sum(int integers[], int length);
extern int sum_integers(int integers[], int length);

int main(){
    int array[5] = {-3,-1,0,-1,-3};
    std::cout << palindrome_sum(array,5) << std::endl;
}