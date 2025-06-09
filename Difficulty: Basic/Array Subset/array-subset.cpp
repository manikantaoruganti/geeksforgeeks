#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int, int> freq;
        
        // Count frequency of each element in a
        for (int x : a) {
            freq[x]++;
        }

        // Check if each element in b exists in a with sufficient count
        for (int x : b) {
            if (freq[x] == 0) {
                return false;
            }
            freq[x]--;
        }

        return true;
    }
};
