#include <bits/stdc++.h>

using namespace std;



// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> c) {
    
    int n=c.size();
    int i,j=0;
    int mincost=0;
    
    sort(c.begin(),c.end(),greater<int>());
    
    for(i=0;i<c.size();i++)
    {
        if(i%k==0)
        j++;
        
        mincost=mincost+(j*c[i]);
    }
    
    return mincost;

}

int main()
{
    int n,k,el;
    cin>>n;
    cin>>k;
    
    vector<int> c;

    for (int i = 0; i < n; i++) 
    {
        cin>>el;
        c.push_back(el);

    }

    int minimumCost = getMinimumCost(k, c);

    cout << minimumCost << "\n";

    return 0;
}