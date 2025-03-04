#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

void print(vector<int> data) {
  cout << "Total Elements: " << data.size()
       << "\n";
  for (int d : data) {
    cout << d << " ";
  }
  cout << endl << endl;
}

int main() {
  ios_base::sync_with_stdio(false);  // Improve input/output performance
  cin.tie(NULL);                     // Untie cin from cout for faster execution

  // Declaring vectors in different ways

  // 1. Create a vector with a fixed size, initialized with default values (0)
  vector<int> vect(5);  // Similar to int vect[5], but dynamic

  // 2. Create a vector with a specific size, default value is 0
  vector<int> vect1(6);

  // 3. Create a vector with a specific size and initialize all elements with a
  // given value
  vector<int> vect2(6,
                    14);  // Creates a vector of size 6, all elements set to 14

  // 4. Initialize a vector with a list of values
  vector<int> vect3 = {14, 15, 16, 25};

  // 5. Copy an existing vector into another vector
  vector<int> vec = {14, 15, 16, 25};
  vector<int> vec1 = vec;  // Copies all elements from vec to vec1

  // 6. Adding elements to a vector dynamically using push_back()
  vector<int> v;   // Declare an empty vector
  v.push_back(5);  // Adds 5 at the end
  v.push_back(8);  // Adds 8 at the end

  vector<int> v1 = {14, 89, 34};  // Initialize with predefined values
  v1.push_back(15);               // Adds 15 at the end
  v1.push_back(56);               // Adds 56 at the end

  // 7. Inserting elements at a specific position in a vector
  vector<int> v3 = {1, 2, 3};  // Initialize vector with values

  // Insert elements at different positions
  // v3.insert(v3.begin(), 7);  // Insert 7 at the beginning
  // v3.insert(v3.begin() + 2, 7);  // Insert 7 at index 2
  // v3.insert(v3.end(), 7);  // Insert 7 at the end (same as push_back())
  // v3.insert(v3.end() - 1, 7);  // Insert 7 before the last element

  // Insert multiple copies of a value at a specific position
  // v3.insert(v3.begin(), 2, 7);  // Insert two 7s at the beginning
  // v3.insert(v3.begin() + 1, 2, 7);  // Insert two 7s at index 1

  // 8. Accessing elements using index, front(), and back()
  vector<int> v4 = {14, 25, 89};
  // cout << v4[2] << endl;
  // cout << "First Element: " << v4.front() << endl;
  // cout << "Last Element: " << v4.back() << endl;

  // 9. Output elements using range-based loops
  // vector<int> v5 = {14, 78, 89, 10};
  // for (int v : v5) {
  //     cout << v << endl;
  // }

  // 10. Output elements using traditional for-loops
  vector<int> v6 = {10, 20, 30, 40, 50, 60, 70};
  int ln = v6.size();
  /*
  for (int i = 0; i < ln; ++i) {
      cout << v6[i] << endl;
  }
  */
  // Output elements from index 2 to ln-2
  /*
  for (int i = 2; i < ln - 2; ++i) {
    cout << v6[i] << endl;
  }
  */
  // 11. Converting a Vector to an Array
  // In certain scenarios, you may need to access a vector as a traditional array.
  // This can be achieved using the `.data()` function, which returns a pointer to the underlying array.

  vector<int> v7 = {3, 5, 7, 9, 10};
  int* arr = v7.data(); // Obtain a pointer to the vector's internal array
  // cout << arr[2] << endl; // Access elements as if using a traditional array


  // 12. Updating a Specific Position in a Vector
  // In C++, vectors allow direct element modification using the index operator [].
  // Here, we update the third element (index 2) of the vector.

  vector<int> v8 = {2, 4, 8, 10, 12};
  v8[2] = 6; // Updating the value at index 2

  // print(v8); // Ensure a proper print function is available before calling

  // 13. Swapping Two Vectors Using the .swap() Function
  // The `.swap()` function exchanges the contents of two vectors efficiently in O(1) time complexity.

  vector<int> ve = {15, 20, 25};
  vector<int> ve2 = {3, 9, 6};

  // cout << "Before Swap:" << endl;
  // print(ve);
  // print(ve2);

  // Performing the swap operation
  ve.swap(ve2);

  // cout << "After Swap:" << endl;
  // print(ve);
  // print(ve2);

  // Note:
  // - `swap()` provides an efficient way to exchange vector contents without manual element copying.

  // 14. Deleting Element using pop_back()
  vector<int> v9 = {3 , 2 , 1 , 6 , 4 , 2};
  // cout << "Before Delete : " << endl;
  // print(v9);
  v9.pop_back(); // remove the last element of the vector
  // cout << "After Delete : " << endl;
  // print(v9);

  // 15. Remove all elements using clear() from vector
  vector <int>v10 = {14 , 16 , 18 , 20};
  // cout << "Before Delete : " << endl;
  // print(v10);
  v10.clear();
  // cout << "After Delete : " << endl;
  // print(v10);

  // 16. Remove specific positions elements using erase() and stuff
  vector <int>v11 = {24 , 16 , 38 , 70 , 14 , 15 , 16};
  cout << "Before Delete : " << endl;
  print(v11);
  // v11.erase(v11.begin() + 2 , v11.begin() + 3); // here we need specify position for that we use begin() , end(). Here we remove only 1 element. Remove ultil the end
  v11.erase(v11.begin() + 2 , v11.end()-2);
  cout << "After Delete : " << endl;
  print(v11);
  return 0;
}
