#include <bits/stdc++.h>
using namespace std;

class BubbleSort
{
    private:
    void swap(int arr[],int i,int j)
    {
      int temp;
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }

    public:
    void sort(int arr[],int size)
    {
       for(int i=0;i<size-1;i++)
       {
           int p=0;
           for(int j=1;j<size-i;j++)
           {
               cout<<p<<" "<<j<<endl;
                if(arr[p]>arr[j])
                {
                    swap(arr,p,j);
                }
                p++;
           }
       }
    }
  
};
int main()
{
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the elements in the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    BubbleSort bubbleObj=BubbleSort();
    bubbleObj.sort(arr,size);
    cout<<"The elements in array are: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     return 0;
}

