//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
public:
    int nCr(int n, int r) {
        // If r is greater than n, return 0
        if (r > n) {
            return 0;
        }
        
      
        if (r > n - r) {
            r = n - r;
        }

        long long res = 1;

        // Calculate the result using the optimized formula
        for (int i = 1; i <= r; ++i) {
            res = res * (n - r + i) / i;
        }

        return (int)res;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends


// Commit for 2024-12-16
