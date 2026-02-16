#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;
    vector<int> v1 = {1,2,3,4,5}; 
    vector<int> v2(5, 10); // 5 elements, each initialized to 10`

    for(int i : v2) { // for each loop
        cout << i << " "; // Output: 10 10 10 10 10
    } cout << endl;

    // Accessing elements
    cout << "Element at index 2: " << v1[2] << endl; // Output: 3
    cout << "Element at index 3: " << v2[3] << endl; // Output: 10

    // Modifying elements
    v1[2] = 100;
    cout << "Modified element at index 2: " << v1[2] << endl; // Output: 100

    // Adding elements
    v1.push_back(6);
    cout << "Size of v1 after push_back: " << v1.size() << endl; // Output: 6

    // Removing elements
    v1.pop_back();
    cout << "Size of v1 after pop_back: " << v1.size() << endl; // Output: 5

    // Iterating through the vector
    cout << "Elements of v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl; // Output: 1 2 100 4 5

    return 0;
}

// output:
// 10 10 10 10 10
// Element at index 2: 3
// Element at index 3: 10
// Modified element at index 2: 100
// Size of v1 after push_back: 6
// Size of v1 after pop_back: 5
// Elements of v1: 1 2 100 4 5