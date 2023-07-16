#include <iostream>

void removeDuplicates(int arr[], int& size){
  int i;
  int j;
  int k;

  for(i = 0; i < size; i++){
    for(j = i + 1; j < size; j++){
      if(arr[i] == arr[j]){
        for(k = j; k < size - 1; k++){
          arr[k] = arr[k + 1];
        }
        size--;
        j--;
      }
    }
  }
}

int main(){
  int arr[]= {1,2,3,2,4,1,5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int i;

  removeDuplicates(arr, size);

  for (i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }

  return 0;
}
