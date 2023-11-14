//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<int> st;
        long long leftsmall[n], rightsmall[n];
        
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
            st.pop();
            }
            
            if(st.empty())
            leftsmall[i]=0;
            
            else
            leftsmall[i]=st.top()+1;
            
            st.push(i);
        }
        
        while(!st.empty()) 
        st.pop();
        
         for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
            st.pop();
            }
            
            if(st.empty())
            rightsmall[i]=n-1;
            
            else
            rightsmall[i]=st.top()-1;
            
            st.push(i);
        }
        
        long long maxA=0;
        long long temp;
        
        for(int i=0;i<n;i++)
        {
        temp=arr[i]*(rightsmall[i]-leftsmall[i]+1);
        if(temp>maxA)
        maxA=temp;
        }
        return maxA;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends