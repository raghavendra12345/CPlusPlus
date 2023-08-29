#include <iostream>
using namespace std;

int main()
{
    int i,num,lowerbound=0,upperbound=100,N;
    bool x;

    cout<<"Do you wish to set the lower and upper bound"<<endl;
    cin>>x;

    if(x)
    {  cout<<"Enter lower and upper bound"<<endl;
        cin>>lowerbound;
        cin>>upperbound;
    }

    cout<<"The lowerbound and upperbound is set to " << lowerbound <<" and "<<upperbound <<"  respectively"<<endl;

    cout<<"Enter the number of randomness values needed"<<endl;
    cin>>N;

    for(i=0;i<N;i++)
    {
       cout<<lowerbound+rand()%(upperbound-lowerbound)<<endl;  
    }

return 0;


}