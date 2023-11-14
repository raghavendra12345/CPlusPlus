#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,N,K;
    cin>>N>>K;
    string s;
    for(i=0;i<N;i++)
    {
        if(i%K==0)
        s.push_back('a');
        else
        s.push_back('b');

    }
    
    cout<<"String created is: "<<s<<endl;

return 0;
}
