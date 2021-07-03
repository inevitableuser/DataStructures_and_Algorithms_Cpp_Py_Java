#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
  int i=0,j=n-1,mid;
  while(i<=j)
  {
    mid=(i+j)/2;
    if(arr[mid]==key)
    {
      return mid;
    }
    else if(arr[mid]<key)
    {
      i=mid+1;
    }
    else
    {
      j=mid-1;
    }
  }
  return -1;
}
int main()
{
  int n,key,res_index;
  cout<<"enter the size of array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cout<<"enter the element"<<i+1<<" : ";
    cin>>arr[i];
  }
  cout<<"enter the key to search: ";
  cin>>key;
  res_index=binarysearch(arr,n,key);
  if(res_index==-1)
  {
    cout<<"element "<<key<<" not in the list";
  }
  else
  {
    cout<<"element is present in index "<<res_index;
  }
  return 0;
}