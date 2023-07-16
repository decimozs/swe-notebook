#include <iostream>

bool checkArray(int arr[], int size){
  int i ;

  for(i = 0; i < size; i++){
    if(arr[i] < arr[i - 1]){
      return false;
    }
  }

  return true;
}

int main(){
  int arr[] = {1,3,5,7,9,};
  int size = sizeof(arr) / sizeof(arr[0]);

  int sorted = checkArray(arr, size);

  if(sorted){
    std::cout << "Array is sorted" << std::endl;
  }else{
    std::cout << "Array is not sorted" << std::endl;
  }

  return 0;
}
