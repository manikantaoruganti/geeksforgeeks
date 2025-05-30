//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <vector>  
#include <unordered_map>  
using namespace std;  

class Solution {  
public:  
    vector<int> findDuplicates(vector<int>& arr) {  
        unordered_map<int, int> countMap; // To store the count of occurrences  
        vector<int> duplicates; // To store the result  

        // Count occurrences of each element  
        for (int num : arr) {  
            countMap[num]++;  
        }  

        // Collect elements that occur more than once  
        for (auto& entry : countMap) {  
            if (entry.second > 1) {  
                duplicates.push_back(entry.first);  
            }  
        }  

        return duplicates; // Return the duplicates  
    }  
};

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.findDuplicates(a);
        sort(result.begin(), result.end());

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no duplicates are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends