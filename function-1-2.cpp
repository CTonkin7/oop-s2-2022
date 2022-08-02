#include <iostream>

int is_identity(int array[10][10]){
    int result = 1;
    for (int i=0; i<10;i++){
        for (int j=0; j<10;j++){
            if (i == j){
                if (array[i][j] != 1){
                    result = 0;
                    return result;
                }
            } else if (array[i][j] != 0){
                result = 0;
                return result;
            }
        }
    }
    return result;
}