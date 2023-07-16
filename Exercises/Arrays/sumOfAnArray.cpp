#include <iostream>

int sumOfTheArray(int arr[], int size){
  int sum = 0;
  int i;

  for(int i = 0; i < size; i++){
    sum += arr[i];
  }

  return sum;
}

int main(){
  int sum = 0;
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int result = sumOfTheArray(arr, size);

  std::cout << result << std::endl;

  return 0;

}
