#include <bits/stdc++.h>
using namespace std;

class Person
{
  public:
  string FirstName;
  string LastName;
  int Age;
  Person()
  {
       
  }
  Person(string fname,string lname,int age)
  {
    FirstName=fname;
    LastName=lname;
    Age=age;
  }


};

class ClassDataArray
{
  public:
  int size=0,i,j;

  ClassDataArray()
  {

  }

  int insert(string fname,string lname,int age,Person arr[])
  {
     Person pobj=Person(fname,lname,age);
     arr[size]=pobj;
     size++;
     cout<<"Succesfully inserted new record with firstname "<<fname<<endl;
     return size;
  }

  void find(string fname,Person arr[])
  {
     for(i=0;i<size;i++)
    {
      if(fname==arr[i].FirstName)
      {
         cout<<"Record Found :"<<endl;
         cout<<arr[i].FirstName<<" "<<arr[i].LastName<<" "<<arr[i].Age<<endl;
         break;
      }
    }

  }
  int Delete(string fname,Person arr[])
  {
       for(i=0;i<size;i++)
    {
      if(fname==arr[i].FirstName)
      {
         for(j=i;j<size-1;j++)
         {
           arr[j]=arr[j+1];
         }
         break;
      }
    }
    size--;
    cout<<"succesfully deleted "<<fname<<" from the records"<<endl;
    return size;
  }

 
  void printAll(Person arr[])
  {
    cout<<"Printing All Records: "<<endl;
    for(i=0;i<size;i++)
    {
      cout<<arr[i].FirstName<<" "<<arr[i].LastName<<" "<<arr[i].Age<<endl;
      cout<<endl;
    }
  }
};

int main()
{
  int cursize=0,maxsize,choice,age;
     string fname,lname;
     cout<<"enter the size of array: ";
     cin>>maxsize;
     Person arr[maxsize];
     ClassDataArray array =ClassDataArray();
     while(1)
     {
         cout<<"1.Insert  2.Find  3.Delete  4.Printall 5.Exit"<<endl;
         cout<<"enter your choice: ";
         cin>>choice;
         
         if(choice==1)
         {
           if(cursize>=maxsize)
           {
             cout<<"Array is full"<<endl;
             continue;
           }
            cout<<"enter firstname: ";
            cin>>fname;
            cout<<"enter lastname: ";
            cin>>lname;
            cout<<"enter age: ";
            cin>>age;
            cursize=array.insert(fname,lname,age,arr);
         }
         else if(choice==2)
         {
           if(cursize==0)
           {
             cout<<"Array is Empty"<<endl;
             continue;
           }
             cout<<"enter firstname to find: ";
             cin>>fname;
             array.find(fname,arr);
         }
         else if(choice==3)
         {
           if(cursize==0)
           {
             cout<<"Array is Empty"<<endl;
             continue;
           }
             cout<<"enter firstname to delete: ";
             cin>>fname;
             cursize=array.Delete(fname,arr);
         }
         else if(choice==4)
         {
           if(cursize==0)
           {
             cout<<"Array is Empty"<<endl;
             continue;
           }
            array.printAll(arr);
         }
         else
         {
           break;
         }
     }
      return 0;
}
