#include <iostream>

using namespace std;

class Student{
    private:
        string name;
        int ID;
        double grade;
    public:
    Student(string s_name; int s_ID; double s_grade){
        name = s_name;
        ID = s_ID;
        grade = s_grade;
    }
    string get_name(){return name; }
    int get_ID(){return ID;}
    double get_grade(){return grade;}
    void set_name(string new_name){name = new_name;}
    void set_ID(int ID){ID = new_ID;}
    void set_grade(double grade){grade = new_grade;}
    bool is_pass();
};

bool Student::is_pass(){
    if (grade < 50){
        return "fail";
    } else {
        return "pass";
    }
}

int main(){
    Student s1("caleb", 1647, 60);
    cout << s1.get_name() << endl;
    cout << s1.get_ID() << endl;
    cout << s1.get_grade() << endl;
    cout << s1.is_pass() << endl;
}
