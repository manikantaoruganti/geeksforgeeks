#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
  public:
 
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int, int> freq;
        
        // Count frequency of each element in a
        for (int x : a) {
            freq[x]++;
        }

        
        for (int x : b) {
            if (freq[x] == 0) {
                return false;
            } 
            freq[x]--;
        }

        return true;
    }
};



// Commit for 2024-11-05

// Commit for 2024-12-22
