#include <bits/stdc++.h>

using namespace std;


int main() {
    int size,n,q;
    int i,j,el;
    cin>>n;
    cin>>q;
    vector<vector<int>> arr;
    vector<vector<int>> queries;
    

    
    for(i=0;i<n;i++)
    {
        cin>>size;
        
        arr[i]=vector<int>(size);    
        for(j=0;j<size;j++)
        {
            cin>>arr[i][j];

        }
    }
    
    for(i=0;i<q;i++)
    {
        cin>>queries[i][0];
        cin>>queries[i][1];
        
    }
    
    for (i=0;i<q;i++)
    {
        cout<<arr[queries[i][0]][queries[i][1]]<<endl;
    }
    
       
    return 0;
}
