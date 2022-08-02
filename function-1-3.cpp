#include <iostream>

void count_digits(int array[4][4]){
    int num0 = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;
    int num7 = 0;
    int num8 = 0;
    int num9 = 0;

    for (int i =0; i<4;i++){
        for (int j=0;j<4;j++){
        switch(array[i][j]) {
        case 0:
            num0++;
            break;
        case 1:
            num1++;
            break;
        case 2:
            num2++;
            break;
        case 3:
            num3++;
            break;
        case 4:
            num4++;
            break;
        case 5:
            num5++;
            break;
        case 6:
            num6++;
            break;
        case 7:
            num7++;
            break;
        case 8:
            num8++;
            break;
        case 9:
            num9++;
            break;
        }
    }
    }
    std::cout << "0:" << num0 << ";1:" << num1 << ";2:" << num2 << ";3:" << num3 << ";4:" << num4 << ";5:" << num5 << ";6:" << num6 << ";7:" << num7 << ";8:" << num8 << ";9:" << num9 << ";" << std::endl;
}
