#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//rand() is a inbuilt function in C++.
//rand() function is used in C++ to generate random numbers in the range [0, RAND_MAX).


int main()
{
    int i,num;
    cout<<"Enter the number of random numbers needed"<<endl;
    cin>>num;

    for(i=0;i<num;i++)
    cout<<rand()<<endl;

    cout<<"We used rand() function to generate random numbers"<<endl;
 // why does it not generate new random numbers everytime?   
 return 0;

}