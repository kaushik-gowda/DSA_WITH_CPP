#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxallowedpages) {
    int student = 1;
    int pages = 0;

    for(int i = 0; i < n; i++) {
        if (arr[i] > maxallowedpages) {
            return false;
        }
        if(pages + arr[i] <= maxallowedpages) {
            pages += arr[i];
        }
        else {
            student++;
            pages = arr[i];
        }

        if(student > m) {
            return false;
        }
    }
    return true;
}


int allocateBooks(vector<int> &arr, int n, int m) {
    int sum = 0; 
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int st = 0, end = sum;
    int ans = -1;

    while(st <= end) {
        int mid = (st + end) / 2;

        if(isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }
    return ans;
}


int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;


    cout << allocateBooks(arr, n, m) << endl;

    return 0;
}

// book allocation problem is a binary search problem where we have to allocate books to students such that the maximum number of pages assigned to a student is minimum. We can use binary search to find the optimal solution by checking if a given maximum number of pages can be allocated to students without exceeding the number of students available.