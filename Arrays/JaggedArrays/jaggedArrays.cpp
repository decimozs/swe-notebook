#include <iostream>

int main(){
  std::cout << "Jagged Arrays" << std::endl;

  const int rows = 4;
  int* arr[rows];

  int row1[] = {1,2};
  int row2[] = {3};
  int row3[] = {4,5,6};
  int row4[] = {7,8,9,10};

  arr[0] = row1;
  arr[1] = row2;
  arr[2] = row3;
  arr[3] = row4;

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < sizeof(arr[i]) / sizeof(arr[i][0]); j++){
      std::cout << arr[i][j] << " ";

    }
    std::cout << std::endl;
  }

  return 0;
}
