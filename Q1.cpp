#include <iostream>
using namespace std;

int main() {
  int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
  int n = 10;        
  int target = 23;    
  int low = 0, high = n - 1, mid;
  int found = -1;
while (low <= high) {
  mid = (low + high) / 2;   
  if (arr[mid] == target) {
    found = mid;
    break;
}
  else if (target < arr[mid])
    high = mid - 1;
  else
}
  if (found != -1)
    cout << "Element found at index: " << found;
  else
    cout << "Element not found"
      return 0;
}
