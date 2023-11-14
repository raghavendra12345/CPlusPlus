#include<bits/stdc++.h>
using namespace std;

int fibo(int i, int memo[], int n) 
{
     if (i <= 0) return 0;
    else if (i == 1) return 1;
    else if (memo[i] > 0) return memo[i];

    memo[i]=fibo(i-1,memo,n)+fibo(i-2,memo,n);

return 0;
}

int main()
{
    int n;
    cout<<"Enter the series of n for printing the fibonicci number\n";
    cin>>n;

    int memo[n]; 

    for(int i=0;i<n;i++)
    {
        cout<<i<<" : "<<fibo(i,memo,n)<<" "<<endl;
    }
return 0;

}