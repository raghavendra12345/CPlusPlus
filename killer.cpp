#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int arr[n];

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];

		}
	
	stack<int> stac;

	stac.push(arr[0]);

	cout<<stac.size()<<" ";
	
	for(int i=1;i<n;i++)
	{
		while(arr[i]>=stac.top())
		{
			stac.pop();

		}
	stac.push(arr[i]);
	cout<<stac.size()<<" ";	
	}
	cout<<"\n";
	}
		
return 0;
}