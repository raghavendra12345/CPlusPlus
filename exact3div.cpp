//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        int count=0;
        
        for(int j=2;j<=N;j++)
        {
            int div=0;
            
            for(int i=1;i<=j;i++)
            {
                if(j%i==0)
                div++;
                
                if(div>3)
                break;
                
            }
            if(div==3)
            count++;
            
        }
        return count;
    }
};

//{ Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}
// } Driver Code Ends