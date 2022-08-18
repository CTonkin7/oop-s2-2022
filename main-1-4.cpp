#include <iostream>
using namespace std;

extern void copy_doubles(double *old_array, double *new_array, int length);

int main(){
    int length = 5;
    double old_array[5] = {0.2,7.4,11.1,-10.1,2.8};
    double new_array[5];
    copy_doubles(old_array,new_array,length);
    for (int i=0; i<length; i++){
        std::cout<<new_array[i] << " ";
    }

}