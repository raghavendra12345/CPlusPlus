#include <iostream>
using namespace std;

//merge two subarrays L and M into the main array.
void merge(int A[],int p, int q , int r)
{
    // Create L <- A[p..q] and  M <-A[q+1,r]
    int n1=q-p+1;
    int n2=r-q;

    int L[n1], M[n2];


  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = M[j];
      j++;
    }
    k++;
  }  

return ;
}

//Divide the arrays into subarrays, sort them and merge them. 
void mergesort (int A[],int l, int r)
{

    if (l<r)
    {
        int m =l+(r-l)/2;
        mergesort(A,l,m);
        mergesort(A,m+1,r);

        //merging the two sorted arrays.
        merge(A,l,m,r);
    }
return ;    
}

//Implementing merge sort algorithm
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int A[n];

    mergesort(A,0,n-1);

    cout<<"The sorted array is:\n";

    for(i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }

return 0;
}