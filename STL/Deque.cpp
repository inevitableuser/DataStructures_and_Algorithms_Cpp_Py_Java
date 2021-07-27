#include <bits/stdc++.h>
using namespace std;

int main()
{
   deque<int> d;             

     /*
     deque is a doubly ended queue which is collection of static arrays and 
     can grow dynamic in run time
     which can be acted as linkedlist and index access is possible in this.
     random access of deq is little slower than vector.


     For implementing queue go for deq     (best in appending at front and good in appending at end)
     For implementing stack go for vector  (best in appending at end and worst in appending in front)
     */

   d.push_back(1);            //pushing the element from back

   d.push_front(2);          //pushing the element from front

   d.push_back(3);           

   d.push_front(4);

   cout<<"Elements in deq are: ";
   for(int i:d)
   cout<<i<<" ";
   cout<<endl;


   d.pop_back();

   cout<<"Elements in deq are: ";
   for(int i:d)
   cout<<i<<" ";
   cout<<endl;

   d.pop_front();

   cout<<"Elements in deq are: ";
   for(int i:d)
   cout<<i<<" ";
   cout<<endl;

   
   cout<<"Element at position 2 is "<<d.at(1)<<endl;             //accesing element using index d[1] can also used

   cout<<"Front of deq is: "<<d.front()<<endl;                   //gives front element in deq

   cout<<"Back of deq is: "<<d.back()<<endl;                    //gives back element in deq

   cout<<"is deq empty? "<<d.empty()<<endl;                    //tells empty or not

   cout<<"deq size before erase is "<<d.size()<<endl;          //gives size of deq

   d.erase(d.begin()+1);                                       //erasing the element using iterator (begin+1) i.e 1

   cout<<"deq size after erase is "<<d.size()<<endl;

   cout<<"Elements in deq are: ";
   for(int i:d)
   cout<<i<<" ";
   cout<<endl;

  return 0;

}




/*
OUTPUT:

Elements in deq are: 4 2 1 3 
Elements in deq are: 4 2 1 
Elements in deq are: 2 1 
Element at position 2 is 1
Front of deq is: 2
Back of deq is: 1
is deq empty? 0
deq size before erase is 2
deq size after erase is 1
Elements in deq are: 2 
*/
