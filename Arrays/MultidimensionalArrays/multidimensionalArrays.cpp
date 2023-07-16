#include <iostream>

int main(){
  std::cout << "Multidimensional Arrays" << std::endl;

  int row = 3;
  int col = 3;

  int multidimensionalArray[row][col] = {
  {1,2,3},
  {4,5,6},
  {7,8,9}
  };
  
  int i;
  int j;

  // print the multidimensional array
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
     std::cout << multidimensionalArray[i][j] << " "; 
    }
    std::cout << std::endl;
  }

  // print the pointers and memory address
  for (i = 0; i < col; i++) {
    for(j = 0; j < row; j++) {
      std::cout << "Index " << i << " : " << &multidimensionalArray[i][j] << " (Value: " << multidimensionalArray[i][j] << ")" << std::endl;
    }
  }

  return 0;
}
