#include<bits/stdc++.h>
using namespace std;

//complexity of 2^N

long long fact(int n)
{
    if(n<0)
    return -1;

    if(n==0)
    return 1;

    return n*fact(n-1);

}

int main()
{
    int n;
    long long res=0;

    cout<<"Enter the integer to compute the factorial\n";
    cin>>n;   
    res=fact(n);
    cout<<"The factorial of the number "<<n<<" is :"<<res<<endl;

return 0;    
}