//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        // Your code here
       
      if(n & (1 << k))

     return'yes'; 
    }
};

//{ Driver Code Starts.

// Driver Code
int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long n;
        cin >> n; 
        int k;
        cin >> k; 
        Solution obj;
        if (obj.checkKthBit(n, k))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
// } Driver Code Ends



