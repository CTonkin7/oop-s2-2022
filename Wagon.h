#include <iostream>
#include <string>
#include "Capybara.h"

using namespace std;

class Wagon{
    public:
        int index = 0;
        Capybara array[4];
        Wagon();
        void emptyWagon();
        bool addCapybara(Capybara newCapy);
        void printCapybaras();
       
};