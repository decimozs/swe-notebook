#include <iostream>

int main(){
  std::cout << "pointers" << std::endl;

  int num = 16;
  int* ptr = &num;

  std::cout << ptr << std::endl;

  return 0;
}
