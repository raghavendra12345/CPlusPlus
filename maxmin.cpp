#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'maxMin' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

int maxMin(int k, vector<int> arr) 
{
    
    int n=arr.size();
    int min=1e9,diff;
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n-k;i++)
    {
        diff=abs(arr[i]-arr[i+k-1]);
        
        if(diff<min)
        min=diff;
    }

return min;
}

int main()
{
    int n,el;
    int k;
    cin>>n;
    cin>>k;
    vector<int> arr;

    for (int i = 0; i < n; i++) 
    {
        cin>>el;
        arr.push_back(el);
        
    
    }

    int res = maxMin(k, arr);

    cout << res << "\n";

    

    return 0;
}

