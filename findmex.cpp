#include<bits/stdc++.h>
using namespace std;

int main()
{ //smallest whole number not present in the array.
    int i,n,mex=0;
    cin>>n;
    map<int,int> mp;
    map<int,int>::iterator it;
    int arr[n];

    //inputing an array
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {  
        mp[arr[i]]=i;
        
        if(arr[i]==mex)
        {
            mex=mex+1;
        }

    it=mp.find(mex);

    while(it!=mp.end())
    {
        mex=mex+1;
        it=mp.find(mex);
    }

    cout<<mex<<" ";
        

    }


return 0;
}