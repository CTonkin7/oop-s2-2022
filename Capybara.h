#include <iostream>
#include <string>
using namespace std;

class Capybara{
    public:
        string capyName;
        int capyAge;

        Capybara();
        Capybara(string capyName, int capyAge);

        void setName(string capyName);
        string getName();
        void setAge(int capyAge);
        int getAge();
};