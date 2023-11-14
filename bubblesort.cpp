#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'countSwaps' function below.
 *
 * The function accepts INTEGER_ARRAY a as parameter.
 */

void countSwaps(vector<int> a, int n) {
    
    int count=0;
    for (int i = 0; i < n; i++)
    {
    
    for (int j = 0; j < n - 1; j++) 
    {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) 
        {
            swap(a[j], a[j + 1]);
            count++;
        }
    }
    }
    cout<<"Array is sorted in "<< count<<" swaps.\n";
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;

return ;
}

int main()
{
    int n,el;
    cin>>n;
    
    vector<int> a;

    for (int i = 0; i < n; i++) 
    {
        cin>>el;
        a.push_back(el);
    }

    countSwaps(a,n);

    return 0;
}

