#include <iostream>

using namespace std;

int accessElements(int arr[], int index){
  return arr[index];
}

int main(){
  cout << "Constant Time" << endl;

  int array[] = {1,2,3,4,5};
  int element = accessElements(array, 2);
  cout << element << endl;

  return 0;
}
