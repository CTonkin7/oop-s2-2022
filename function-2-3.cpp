#include <iostream>

 void two_five_nine(int array[], int n){
    int num2 = 0;
    int num5 = 0;
    int num9 = 0;
    for (int i =0; i<n;i++){
        switch(array[i]) {
        case 2:
            num2++;
            break;
        case 5:
            num5++;
            break;
        case 9:
            num9++;
            break;
        }
    }


    std::cout << "2:" << num2 << ";5:" << num5 << ";9:" << num9 << ";" << std::endl;
 }
