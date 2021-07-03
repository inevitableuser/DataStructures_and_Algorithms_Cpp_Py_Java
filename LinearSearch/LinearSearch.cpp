#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
for(int i=0;i<n;i++)
{
  if(arr[i]==key)
  {
    return i;
  }
}
return -1;
}
int main() {
  int n;
  cout<<"enter the size of array: ";
  cin>>n;

  int arr[n],key,res_index;
  for(int i=0;i<n;i++)
  {
    cout<<"enter the element "<<i+1<<" in array: ";
    cin>>arr[i];
    cout<<endl;
  }
  cout<<"enter the key to search:";
  cin>>key;
  res_index=linearsearch(arr,n,key);
  if(res_index==-1)
  {
cout<<"\nelement "<<key<<" not found";
  }
  else
  {
    cout<<"\nelement "<<key<<" found at index "<<res_index;
  }


return 0;

}
