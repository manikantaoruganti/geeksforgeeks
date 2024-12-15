//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
#include<algorithm>
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        std::sort(arr.begin(),arr.end());
        int result=arr[arr.size()/2];
     int count=   std::count(arr.begin(),arr.end(),result);
     if(count>arr.size()/2){
         return result;
     }else{
         return -1;
     }

        // your code here
    } 
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends


