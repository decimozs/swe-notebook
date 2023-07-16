#include <iostream>

int main(){
  std::cout << "Fixed Arrays" << std::endl;

  int size = 5;
  int arr[size];

  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;

  int i;

  // print the array 
  std::cout << "[ ";
  for (i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "]" << std::endl;

  // print the pointers and memory address
  std::cout << "Memory Address: " << std::endl;
  for(i = 0; i < size; i++) {
    std::cout << "Element " << i << ": " << &arr[i] << " (Value: " << *(arr + i) << ")" << std::endl;
  }

  return 0;
}
