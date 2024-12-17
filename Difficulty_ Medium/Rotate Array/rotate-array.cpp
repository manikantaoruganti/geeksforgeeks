class Solution {
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; // Handle cases when d > n

        // Reverse the first d elements
        reverse(arr.begin(), arr.begin() + d);
        // Reverse the remaining n-d elements
        reverse(arr.begin() + d, arr.end());
        // Reverse the whole array
        reverse(arr.begin(), arr.end());
    }
};
 


