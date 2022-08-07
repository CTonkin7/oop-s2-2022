#include<iostream>
#include<string>

using namespace std;

struct student{
    string name;
    int grade1;
    int grade2;
    int grade3;
    int grade4;
 };
 struct courses{
    string name;
    string course1;
    string course2;
    string course3;
    string course4;
 };


void print_report(student a,student b,student c,student d,student e, courses f){
    std::cout <<f.name << ' ' <<f.course1<< ' '<<f.course2<< ' '<<f.course3<< ' ' <<f.course4 <<std::endl;
    std::cout <<a.name << ' ';
    std::cout <<a.grade1<< ' ' <<a.grade2<< ' '<<a.grade3<< ' '<<a.grade4<< ' ';
    std::cout << "" << endl;

    std::cout <<b.name << ' ';
    std::cout <<b.grade1<< ' ' <<b.grade2<< ' '<<b.grade3<< ' '<<b.grade4<< ' ';
    std::cout << "" << endl;

    std::cout <<c.name << ' ';
    std::cout <<c.grade1<< ' ' <<c.grade2<< ' '<<c.grade3<< ' '<<c.grade4<< ' ';
    std::cout << "" << endl;

    std::cout <<d.name << ' ';
    std::cout <<d.grade1<< ' ' <<d.grade2<< ' '<<d.grade3<< ' '<<d.grade4<< ' ';
    std::cout << "" << endl;

    std::cout <<e.name << ' ';
    std::cout <<e.grade1<< ' ' <<e.grade2<< ' '<<e.grade3<< ' '<<e.grade4<< ' ';
    std::cout << "" << endl;
    

 }

int main(){
    student s1;
    s1.name = "James";
    s1.grade1 = 68;
    s1.grade2 = 87;
    s1.grade3 = 95;
    s1.grade4 = 66;

    student s2;
    s2.name = "Alice";
    s2.grade1 = 55;
    s2.grade2 = 86;
    s2.grade3 = 91;
    s2.grade4 = 88;

    student s3;
    s3.name = "Ryan";
    s3.grade1 = 76;
    s3.grade2 = 49;
    s3.grade3 = 81;
    s3.grade4 = 68;

    student s4;
    s4.name = "Ben";
    s4.grade1 = 59;
    s4.grade2 = 89;
    s4.grade3 = 65;
    s4.grade4 = 79;

    student s5;
    s5.name = "Joan";
    s5.grade1 = 51;
    s5.grade2 = 66;
    s5.grade3 = 99;
    s5.grade4 = 92;

    courses A;
    A.name = "Report Card";
    A.course1 = "Math";
    A.course2 = "English";
    A.course3 = "Physics";
    A.course4 = "Chemistry";

    print_report(s1,s2,s3,s4,s5,A);
    
}







// extern void print_class(std::string courses[4], std::string students[5],int report_card[5][4],int nstudents);

// int main(){
//     int nstudents = 5;
//     std::string courses[4] = { {"Math"}, {"English"}, {"Physics"}, {"Chemistry"} };
//     std::string students[5] = { {"James"}, {"Alice"}, {"Ryan"}, {"Ben"}, {"Joan"} };
//     int report_card[5][4] = { {68,87,95,66}, {55,86,91,88}, {76,49,81,68}, {59,89,65,79}, {51,66,99,92} };
//     print_class(courses[4],students[5],report_card[5][4],nstudents);
//     return 0;
// }