#include <iostream>

extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);

int main(){
    int array[5] = {1,5,30,5,1};
    std::cout << palindrome_sum(array,5) << std::endl;
}