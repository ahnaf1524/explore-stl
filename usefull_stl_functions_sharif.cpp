#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 1. Demonstration of swap() function in STL
  int a = 5, b = 8;
  cout << "Before Swap variables : " << endl;
  cout << "a : " << a << " b : " << b << endl;

  // Swaps values of 'a' and 'b'
  swap(a, b);
  cout << "After Swap variables : " << endl;
  cout << "a : " << a << " b : " << b << endl;

  // 2. Demonstration of min() function in STL

  // min() returns the minimum of two values
  int x = 5, y = 8;  // Changed variable names to avoid redeclaration issue
  cout << "Minimum of x and y: " << min(x, y) << endl;

  // min() can also be used with an initializer list to find the minimum among
  // multiple values
  cout << "Minimum among multiple values: " << min({14, -1, 0, 56}) << endl;

  // min() does not work directly on an array
  // Example of incorrect usage:
  // int arr[4] = {1, 2, 25, -1};
  // cout << min(arr) << endl; // This will cause an error because min() doesn't
  // accept arrays directly

  // 3. Demonstration of min_element() function in STL

  // min_element() returns a pointer to the smallest element in a given range of
  // an array. To get the index, we subtract the base address of the array.
  // Syntax: min_element(start_pointer, end_pointer) - array_variable;

  int arr[6] = {4, 5, 7, 8, 10, -1};

  // Finding the index of the smallest element in the first four elements (index
  // 0 to 3)
  cout << "Index of minimum element in first 4 elements: "
       << min_element(arr, arr + 4) - arr << endl;
  // Explanation:
  // arr -> Points to the first element (arr[0])
  // arr + 4 -> Points to the 4th index (not included in search range)

  // Finding the index of the smallest element in the entire array (index 0 to
  // 5)
  cout << "Index of minimum element in full array: "
       << min_element(arr, arr + 6) - arr << endl;

  // 4. Demonstration of max_element() function in STL

  // max_element() returns a pointer to the largest element in a given range of
  // an array. To get the index, we subtract the base address of the array.
  // Syntax: min_element(start_pointer, end_pointer) - array_variable;

  int arr[6] = {4, 5, 7, 8, 10, -1};

  // Finding the index of the largest element in the first four elements (index
  // 0 to 3)
  cout << "Index of maximum element in first 4 elements: "
       << max_element(arr, arr + 4) - arr << endl;
  // Explanation:
  // arr -> Points to the first element (arr[0])
  // arr + 4 -> Points to the 4th index (not included in search range)

  // Finding the index of the largest element in the entire array (index 0 to
  // 5)
  cout << "Index of maximum element in full array: "
       << max_element(arr, arr + 6) - arr << endl;
  // 5. Demonstration of find() function in STL

  // The find() function searches for a specific value in a given range.
  // It returns an iterator pointing to the first occurrence of the element.
  // If the element is not found, it returns an iterator to the end of the
  // range. Syntax: find(start_pointer, end_pointer, value) - array_variable;

  int arr2[5] = {2, 4, 8, 12, 7};

  // Searching for an existing element (success case)
  cout << "Index of element 7: " << find(arr2, arr2 + 5, 7) - arr2 << endl;

  // Searching for a non-existing element (failure case)
  cout << "Index of element 9 (not found): " << find(arr2, arr2 + 5, 9) - arr2
       << endl;

  // Explanation:
  // - If the element is found, find() returns an iterator pointing to its
  // position.
  // - If the element is not found, find() returns an iterator to the end of the
  // range (arr2 + 5).
  // - Subtracting the base address (arr2) gives the index.
  // - If the array length is 5, and an element is not found, the returned index
  // will be 5,
  //   which is out of bounds (indicating that the element is absent).

  // 6. Demonstration of count() function in STL

  // The count() function counts the occurrences of a specific value in a given
  // range. It returns an integer representing the frequency of the specified
  // value. Syntax: count(start_pointer, end_pointer, value);

  int arr3[5] = {5, 2, 7, 2, 1};

  // Counting occurrences of the number 2 in the array
  cout << "Occurrences of 2: " << count(arr3, arr3 + 5, 2) << endl;

  // Counting occurrences of the number 1 in the array
  cout << "Occurrences of 1: " << count(arr3, arr3 + 5, 1) << endl;

  // Counting occurrences of the number 9 in the array (not present, should
  // return 0)
  cout << "Occurrences of 9: " << count(arr3, arr3 + 5, 9) << endl;

  // Explanation:
  // - If the value is present, count() returns the number of times it appears
  // in the range.
  // - If the value is not present, it returns 0.
  // - count() can be used as an alternative to find() when checking for
  // existence in contests.

  // 7. Demonstration of sort() function in STL

  // The sort() function sorts an array in ascending order by default.
  // Syntax: sort(start_pointer, end_pointer);

  int arr4[6] = {7, 2, -3, 4, 5, 0};

  // Printing the array before sorting
  cout << "Before Sorting: " << endl;
  for (int i = 0; i < 6; ++i) {
    cout << arr4[i] << " ";
  }
  cout << endl;

  // Sorting the array in ascending order
  sort(arr4, arr4 + 6);

  // Printing the array after sorting
  cout << "After Sorting: " << endl;
  for (int i = 0; i < 6; ++i) {
    cout << arr4[i] << " ";
  }
  cout << endl;

  // Explanation:
  // - sort() arranges the elements of the array in increasing order.
  // - It works in O(N log N) time complexity, making it very efficient for
  // large datasets.
  // - The sorting is done in-place, modifying the original array.

  // 8. Demonstration of the binary_search() function in STL (Standard Template
  // Library) The binary_search() function is more efficient for searching in a
  // sorted array compared to the find() function, which uses linear search.
  // Binary search works by repeatedly dividing the search interval in half,
  // making it much faster for large datasets.

  // Binary search works efficiently on sorted arrays.
  // The array must be sorted in increasing order for correct results.
  int arr5[4] = {14, 21, 28, 35};  // Sorted array

  // The binary_search(start, end, key) function checks if 'key' is present in
  // the given range. It returns true (1) if found, otherwise false (0). Mainly
  // it returns boolean value

  cout << binary_search(arr5, arr5 + 4, 21)
       << endl;  // Searches for 21, should return 1 (true)
  cout << binary_search(arr5, arr5 + 4, 7)
       << endl;  // Searches for 7, should return 0 (false)

  return 0;
}
