#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//rand() is a inbuilt function in C++.
//rand() function is used in C++ to generate random numbers in the range [0, RAND_MAX).


int main()
{
    int i,num;
    int Range;
    cout<<"Enter the number of randomness needed"<<endl;
    cin>>num;

    cout<<"Enter the range upto which randomness needs to be generated"<<endl;
    cin>>Range;
    for(i=0;i<num;i++)
    cout<<rand()%Range<<endl;

    cout<<"We used rand() function to generate random numbers"<<endl;
    
 return 0;

}