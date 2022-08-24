#include <iostream>
using namespace std;

extern int next_match_count(int vals[], int length);

int main(){
    int length1 = 8;
    int length2 = 6;
    int vals1[8] = {1,1,2,2,3,3,8,9};
    int vals2[6] = {7,3,2,8,8,1};
    cout << next_match_count(vals1, 8) << endl;
    cout << next_match_count(vals2, 6) << endl;
}