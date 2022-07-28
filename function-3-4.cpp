#include <iostream>

void print_pass_fail(char grade){

    switch(grade) {
  case 'A':
    std::cout << "pass\n" << std::endl;
    break;
  case 'B':
    std::cout << "pass\n" << std::endl;
    break;
  case 'C':
    std::cout << "pass\n" << std::endl;
    break;
  case 'D':
    std::cout << "fail\n" << std::endl;
    break;
  case 'E':
    std::cout << "fail\n" << std::endl;
    break;
default:
    std::cout << "Nothing\n" << std::endl;
    break;
}

}