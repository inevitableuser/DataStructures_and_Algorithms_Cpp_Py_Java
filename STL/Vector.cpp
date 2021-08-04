#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;     //vector is dynamic array

  vector<int> a(5,1);         //5 is initial size and 1 is initial default value in each block
 
  vector<int> b(5);           //5 is initial size and 0 is default values

 
  vector<int> copyofa(a);    //copies all elements from a to copyofa


  vector<int> x={1,2,3,4,5};

  x.insert(x.end(),a.begin(),a.end());     //appends a vector to x's tail  similar to addall in java
  
  
  
  vector<int>::iterator it=vector.begin()+3;
 
  
  int index=it-x.begin()               // itetator - vector.begin() gives the index value of that iterator
  

  cout<<"Elements in vector a: ";
  for(int i:a)
  cout<<i<<" ";
  cout<<endl;


  cout<<"Elements in vector x: ";
  for(int i:x)
  cout<<i<<" ";
  cout<<endl;


  x.erase(x.begin()+1);               //removes  element based on index

  cout<<"Elements in vector x after erase of one ele: ";
  for(int i:x)
  cout<<i<<" ";
  cout<<endl;

  x.erase(x.begin(),x.begin()+4);         //removes group of ele between the indexes provided

  cout<<"Elements in vector x after erase of group of ele: ";
  for(int i:x)
  cout<<i<<" ";
  cout<<endl;
 
  x.at(1)=7;                     //x[1]=7 can also use

  cout<<"Elements in vector x after changing value at index 1: ";
  for(int i:x)
  cout<<i<<" ";
  cout<<endl;


  cout<<"Elements in vector copyofa: ";
  for(int i: copyofa)
  cout<<i<<" ";
  cout<<endl;


  cout<<"Elements in vector b: ";
  for(int i:b)
  cout<<i<<" ";
  cout<<endl;

  cout<<"capacity of vector is: "<<v.capacity()<<" and ";
  cout<<"Size of vector is: "<<v.size()<<endl;

  v.push_back(1);    //its like append in python

  cout<<"capacity of vector is: "<<v.capacity()<<" and ";
  cout<<"Size of vector is: "<<v.size()<<endl;

  v.push_back(2);

  cout<<"capacity of vector is: "<<v.capacity()<<" and ";
  cout<<"Size of vector is: "<<v.size()<<endl;

  v.push_back(3);


  cout<<"capacity of vector is: "<<v.capacity()<<" and ";
  cout<<"Size of vector is: "<<v.size()<<endl;

  cout<<"element at position 2 is: "<<v[1]<<endl;

  cout<<"element at position 3 is: "<<v.at(2)<<endl;

  
  v.insert(v.begin()+1,9);    //inserts 9 at index 1

  cout<<"after inserting 9 at index 1 the elements in array are: ";
  for(int i: v)
  {
      cout<<i<<" ";
  }
  cout<<endl;

  cout<<"Front of vector is "<<v.front()<<endl;

  cout<<"Back of vector is "<<v.back()<<endl;

  cout<<"Printing vector before popback: ";
  for(int i: v)
  {
      cout<<i<<" ";
  }
  cout<<endl;
  
  v.pop_back();                            //its like pop() in python

  cout<<"Printing vector after popback: ";
  for(int i: v)
  {
      cout<<i<<" ";
  }
  cout<<endl;

 cout<<"Size of vector is "<<v.size()<<" and Capacity of vector is "<<v.capacity()<<endl;

  v.clear();                    //clears all the elements but capicity same

  cout<<"size of vector after clear is "<<v.size()<<" and capacity of vector is "<<v.capacity()<<endl;

  return 0;

}

