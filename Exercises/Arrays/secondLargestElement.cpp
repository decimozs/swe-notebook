#include <iostream>

int findTheSecondLargestElement(int arr[], int size){
  int largestElement = arr[0];
  int secondLargestElement = arr[0];
  int i;

  for(i = 0; i < size; i++){
    if(arr[i] < largestElement){
      secondLargestElement = largestElement;
      largestElement = arr[i];
    }else if(arr[i] > secondLargestElement && arr[i] != largestElement){
      secondLargestElement = arr[i];
    }
  }

  return secondLargestElement;
}

int main(){
  int arr[] = {9,5,2,7,3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int secondLargestElement = findTheSecondLargestElement(arr, size);

  std::cout << secondLargestElement << std::endl;

  return 0;
}
