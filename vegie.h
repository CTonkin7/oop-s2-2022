#include <iostream>
#include <string>

using namespace std;

class vegie: public animal{
    public:
    vegie(string n,int v);
    string favourite_food = 'grass';
    string get_name();
    
    string get_favourite_food();
    void set_favourite_food(string food);

    private:
    static int nextID = nextID + 1;

}