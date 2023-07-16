#include <iostream>

int main(){
  int sum = 0;
  int arr[] = {1,2,3,4,5};

  int size = sizeof(arr) / sizeof(arr[0]);

  int i;
  for(i = 0; i < size;  i++){
    sum += arr[i];
  }

  std::cout << "Sum: " << sum << std::endl;

  return 0;
}
