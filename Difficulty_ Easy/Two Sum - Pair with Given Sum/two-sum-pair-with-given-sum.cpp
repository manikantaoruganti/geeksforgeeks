#include <unordered_set>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> seen;

        for (int num : arr) {
            int complement = target - num;
            if (seen.count(complement)) {
                return true; // Found a pair
            }
            seen.insert(num);
        }

        return false; // No such pair
    }
};



// Commit for 2024-12-12
