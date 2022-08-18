#include <iostream>
using namespace std;

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){
    int n = 3;
    string first[3][2] = {{"a","b"}, {"c","d"}, {"e","f"}};
    string second[3][2];
    string_2d_copy(first,second,n);
    for (int i=0; i<n;i++){
        for(int j=0;j<2;j++){
            std::cout << second[i][j] << " ";
        }
        std::cout<< "" << std::endl;
    }

}