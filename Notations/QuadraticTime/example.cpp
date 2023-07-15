#include <iostream>

using namespace std;

void printEveryPair(int arr[], int size){
  int i;
  int j;

  for(i = 0; i < size; i++){
    for(j = i + 1; j < size; j++){
      cout << "(" <<  arr[i] << "," << arr[j] << ")" << endl;
    }
  }
}

int main(){
  cout << "Quadratic Time" << endl;
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr) / sizeof(arr[0]);

  printEveryPair(arr, size);

  return 0;
}
