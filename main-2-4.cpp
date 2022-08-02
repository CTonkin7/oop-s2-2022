#include <iostream>

extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

int main(){
   int integers[6] = {12,9,4,22,1,2};
   std::cout<< sum_min_max(integers,6) <<std::endl;
   return 0;
}