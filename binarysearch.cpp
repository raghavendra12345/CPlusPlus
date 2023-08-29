#include<bits/stdc++.h>
using namespace std;
int binarysearch(int*,int,int);


// Every element is searched as potential key.
//If any element is found equal to the key the search is successfull.
//If no element found return no matches found.
//Advantage over the binary search is that the data structure need not be sorted. O(N)

int main()
{
    int *a,n,i,key,place;

    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    a = new int(n);

    cout<<"Enter the values in the array in sorted format (Binary search needs sorted array)"<<endl;

    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<"Enter the element that you wish to search"<<endl;
    cin>>key;


    place=binarysearch(a,n,key);

    if(place<0)
    cout<<"The element you asked for is not in the array"<<endl;

    else
    cout<<"The element was found. It was found at location "<<place+1<<endl;


return 0;
}

int binarysearch(int a[], int n, int key)
{
    int place=-1;
    int low=0, high=n, mid;

    

    while(low<high)
    {
        mid =(low+high)/2;

        if(a[mid]==key)
        {
        place=mid;
        break;
        }

        if(a[mid]>key)
        high=mid;

        if(a[mid]<key)
        low=mid;   
            

    }

    

return place;
}