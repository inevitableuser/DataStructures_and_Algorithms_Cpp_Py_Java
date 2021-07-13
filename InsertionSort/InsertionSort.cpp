#include<bits/stdc++.h>
using namespace std;

class InsertionSort
{

   public:
      void insertionSort(int arr[],int size)
      { 
          int i,j,cur;
          for(i=1;i<size;i++)
          {
              cur=arr[i];
              for(j=i;j>0;j--)
              {
                  if(cur<arr[j-1])
                  {
                    arr[j]=arr[j-1];
                  }
                  else
                  {
                  break;
                  }
              }  
              arr[j]=cur;
          }
          
         
      }

};

int main()
{

 int size;
 cout<<"Enter the size of array:";
 cin>>size;
 int arr[size];
cout<<"Enter the elements in array: ";
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
InsertionSort sort=InsertionSort();
sort.insertionSort(arr,size);
cout<<"The elements after sorted are: ";
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}

