#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans; // Return the pair as soon as we find it
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 15; // Example target sum


    vector<int> result = pairsum(arr, target);
    cout << "Pair with sum " << target << ": " << result[0] << " and " << result[1] << endl;

    return 0;
}

// output: Pair with sum 10: 1 and 9