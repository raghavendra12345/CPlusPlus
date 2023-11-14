#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> decimaltobinary(int x)
{
    cout<<"calling you";
    vector<int> bini;
    

    while(x>0)
    {
        bini.push_back(x%2);
        x=x/2;
    }

return bini;
}

int main()
{
    vector<int> binary;
    int i,x;

    cout<<"Enter the integer value x";
    cin>>x;
    cout<<"Converting integer to binary representation\n";
    binary = decimaltobinary(x);
    //cout<<"The binary representation of "<<x<<" is given as "<<binary<<endl;

    for (i=0;i<binary.size();i++)
    {
        cout<<binary[i]<<"";

    }

return 0;    
}