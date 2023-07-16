#include <iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int target){
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid; 
    }

    if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main(){
  cout << "Logarithmic Time" << endl;

  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int target = 9;

  int size = sizeof(arr) / sizeof(arr[0]);

  int result = binarySearch(arr, 0, size - 1, target);

  if (result != -1){
    cout << "Found the element in the array on the index of " << result << endl;
  } else {
    cout << "Cannot find the element in the array" << endl;
  }

  return 0;
}
