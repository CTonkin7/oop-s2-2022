#include <iostream>
using namespace std;
extern int* matrix_min_max(int **vals,int num_rows, int num_cols);

int main(){
    int nrows = 3;
    int ncols = 3;
    int row1[3]={10,15,99};
    int row2[3]={100,5,73};
    int row3[3]={23,56,1};
    int *vals[]={row1,row2,row3};
    int *max_min = matrix_min_max(vals,nrows,ncols);
    cout << "{" << 1 << "," << 100 << "}" << endl;
}