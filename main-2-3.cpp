#include <iostream>

extern bool is_palindrome(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main(){
   int integers[5] = {1,2,3,2,1};

   if (is_palindrome(integers, 5) != -2){
        sum_if_palindrome(integers, 5);
        sum_array_elements(integers,5);
   }

   

   



}