#include <iostream>

using namespace std;

int linearAccess(int arr[], int size){
  int sum = 0;
  int i;

  for(i = 0; i < size; i++){
    sum += arr[i];
  }

  return sum;
}

int main(){
  cout << "Linear Time" << endl;
  
  int arr[] = {1,2,3,4,5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int result = linearAccess(arr, size);

  cout << result << endl;
  return 0;
}
