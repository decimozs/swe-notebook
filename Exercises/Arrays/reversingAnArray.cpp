#include <iostream>

void reverseArray(int arr[],int size){
  int start = 0;
  int end = size - 1;
  int temp;

  while (start < end) {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
 }

int main(){
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr) / sizeof(arr[0]);

  reverseArray(arr, size);
  
  int i;
  for(i = 0; i < size; i++){
    std::cout << arr[i] << " ";
  }

  return 0;
}
