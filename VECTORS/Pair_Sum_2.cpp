#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;
    while(i < j) {
        int pair_sum = nums[i] + nums[j];
        if(pair_sum == target) {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans; // Return the pair as soon as we find it
        }
        else if(pair_sum < target) {
            i++; // Move the left pointer to increase the sum
        }
        else {
            j--; // Move the right pointer to decrease the sum
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