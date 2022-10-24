#include <iostream>
#include <string>
using namespace std;

class animal{
    public:
    animal(string n, int v);
    string name;
    int animalID;
    int volume;
    virtual void set_name(string) = 0;
    void set_volume(int inputvolume);
    string get_name();
    int get_volume();
    int get_ID();
};