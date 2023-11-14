//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        
       int index=-1;
       //create a empty hashset
       set<int> myset;
       
       
       for (int i = n-1; i >= 0; i--)
       {
        // If element is already in hash set, update min
        if (myset.find(arr[i]) != myset.end())
            index = i+1;
 
        else // Else add element to hash set
            myset.insert(arr[i]);
        }
        
        return index;
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends