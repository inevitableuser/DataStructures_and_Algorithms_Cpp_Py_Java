

#include <bits/stdc++.h>
using namespace std;

 class Person
{
    public :
       string FirstName;
       string LastName;
       int Age;
};

class DataArray
{
    public:
      int maxsize=0;
    DataArray(Person personArr,int maxsize)
    {
         Person person=personArr;
    }

};

int main() 
  { 
     int size,choice;
     cout<<"enter the size of array: ";
     cin>>size;
     int arr[size];
     Person personArr[size];
     while(1)
     {
         cout<<"1.Insert  2.Find  3.Delete  4.Printall 5.Exit"<<endl;
         cout<<"enter your choice";
         cin>>choice;
         if(choice==1)
         {
            
         }
         else if(choice==2)
         {

         }
         else if(choice==3)
         {

         }
         else if(choice==4)
         {

         }
         else
         {
           break;
         }
     }
      return 0;
  }
