#include <iostream>

int main(){
  int size;
  int i;

  std::cout << "Dynamic Arrays" << std::endl;

  std::cout << "Size of the array: ";
  std::cin >> size;

  int* arr = new int[size];
  
  for(i = 0; i < size; i++){
    std::cout << "Element " << i << ": ";
    std::cin >> arr[i];
  }

  std::cout << "Array Elements: " << std::endl;
  for(i = 0; i < size; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  delete[] arr;

  return 0;
}
