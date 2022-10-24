#include <iostream>
#include <string>
using namespace std;

class hunter: public animal{
    public:
    hunter(string n, int v);
    int kills = 0;
    int get_kills;
    void set_kills(int inputKills);
    string get_name();

    private:
    static int nextID = nextID + 1;
};