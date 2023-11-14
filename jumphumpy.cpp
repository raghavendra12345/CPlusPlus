#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n,max=0,temp;
	cin >> n;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		int j=i+1;
	    temp=arr[i];
		while(arr[j]>arr[j-1] && j<=n-1)
		{
			temp=temp^arr[j];
			j++;
		}
		//cout<<temp<<endl;
        if(temp>max)
        max=temp;
	}

	cout<<max<<endl;

return 0;
}