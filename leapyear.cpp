#include <bits/stdc++.h>
using namespace std;
int leapyear(int yr)
{
    if(yr%400==0)
    return 1;

    if(yr%4==0 && yr%100!=0)
    return 1;

    return 0;

}


int main()
{   
    int yr;
    cout<<"Enter the year"<<endl;
    cin>>yr;

    bool check;

    check=leapyear(yr);

    if(check)
    cout<<yr<<" is leap"<<endl;

    else
    cout<<yr<<" not leap"<<endl;


return 0;
}


