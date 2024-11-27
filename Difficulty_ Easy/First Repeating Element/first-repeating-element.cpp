#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        unordered_map<int, int> freq;

        // First pass: count frequencies
        for (int num : arr) {
            freq[num]++;
        }

        // Second pass: find first element with freq > 1
        for (int i = 0; i < arr.size(); i++) {
            if (freq[arr[i]] > 1) {
                return i + 1;  // 1-based index
            }
        }

        return -1;  // No repeated element
    }
};


