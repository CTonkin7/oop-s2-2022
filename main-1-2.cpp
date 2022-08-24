#include <iostream>
using namespace std;

extern string month_lookup(int month);

int main(){
    cout<< month_lookup(1) << endl;
    cout<<month_lookup(2)<< endl;
    cout<<month_lookup(3)<< endl;
    cout<<month_lookup(4)<< endl;
    cout<<month_lookup(5)<< endl;
    cout<<month_lookup(6)<< endl;
    cout<<month_lookup(7)<< endl;
    cout<< month_lookup(8)<< endl;
    cout<<month_lookup(9)<< endl;
    cout<<month_lookup(10)<< endl;
    cout<<month_lookup(11)<< endl;
    cout<<month_lookup(12)<< endl;
    cout<<month_lookup(20)<< endl;
    cout<<month_lookup(-5)<< endl;
    
}