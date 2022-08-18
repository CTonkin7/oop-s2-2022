#include <iostream>
using namespace std;

extern void copy_integers(int old_array[], int new_array[], int length);

int main(){
    int length = 5;
    int old_array[5] = {0,12,8,-10,2};
    int new_array[5];
    copy_integers(old_array,new_array,length);

}