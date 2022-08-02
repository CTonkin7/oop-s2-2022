#include <iostream>

extern bool is_palindrome(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main(){
   int integers[5] = {1,5,3,2,1};
   sum_if_palindrome(integers,5);
   return 0;

}