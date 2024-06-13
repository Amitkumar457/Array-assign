#include <iostream> 
using namespace std;

int main() {
  int arr[] = {5,2,56,239,23};
  int n = sizeof(arr) / sizeof(arr[0]);

  int product = 1;

  
  for (int i = 0; i < n; i++) {
    product *= arr[i];
  }

  cout << "Product of all elements: " << product << endl;

  return 0;
}
