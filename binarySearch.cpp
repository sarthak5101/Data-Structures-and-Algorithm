// ITERATIVE METHOD

#include <iostream>
using namespace std;

int binarySearch(int array[], int s, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == s)
      return mid;

    if (array[mid] < s)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int s = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, s, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}