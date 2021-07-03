#include <bits/stdc++.h>
using namespace std;

void swap(int *a ,int *b)
{
   int c;
   c=*a;
   *a=*b;
   *b=c;
}

void SelectionSort(int arr[],int n)
{
   int curmin,minindex,i,j;
   for(i=0;i<n;i++)
   {
       curmin=arr[i];
       minindex=i;
       for(j=i+1;j<n;j++)
       {
          if(curmin>arr[j])
          {
            minindex=j;
          }
              
       }
       if(i!=minindex)
           swap(arr[i],arr[minindex]);
   }

}

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element "<<(i+1)<<" : ";
        cin>>arr[i];
    }
    SelectionSort(arr,n);
    cout<<"the elements after sorting are: ";
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
