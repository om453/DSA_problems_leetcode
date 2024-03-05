#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
void selection_sort(int arr[], int n) {
  // selection sort
  for (int i = 0; i < n - 1; i++) {

    int miniIndex = i;           // Assume the current index has the minimum value

 // Finding the index of the minimum element in the unsorted part of the array
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[miniIndex]) {
        miniIndex = j;
      }
    }

 // Swaping the minimum element with the first element of the unsorted part
    swap(arr[miniIndex] , arr[i] );
  }

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

}
int main() {
  int arr[] = {13,46,24,2,15,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);
  return 0;
}