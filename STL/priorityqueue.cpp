#include <bits/stdc++.h>
using namespace std;

void print(priority_queue<int> maxi)                        //recursive func to print max-heap priority queue 
{                                                          
   if(maxi.empty())
   {
       return;
   }
   cout<<maxi.top()<<" ";
   maxi.pop();
   print(maxi);
}

void print(priority_queue<int,vector<int>,greater<int>> mini)                        //recursive func to print min-heap priority queue 
{                                                          
   if(mini.empty())
   {
       return;
   }
   cout<<mini.top()<<" ";
   mini.pop();
   print(mini);
}

int main()
{
   priority_queue<int> maxi;  

   /* 
    by default pq is maxheap in c++, where as in java default is minheap  

    c++ declaration for min-heap                   
    priority_queue<int,vector<int>,greater<int>> mini;    
   */

   maxi.push(1);

   maxi.push(2);                                             // push the ele in priority queue
   
   maxi.push(3);

   maxi.push(4);

   maxi.push(5);

   cout<<"Printing maxheap Priority queue: ";
   print(maxi);                                              // custom recursive func to print priority queue
   cout<<endl;                                              
                                                            // iteratively also we can print priority queue

   cout<<"Size of maxheap priority queue: "<<maxi.size()<<endl;     // gives size of pr queue


   priority_queue<int,vector<int>,greater<int>> mini;       // priority queue declaration for min heap

   mini.push(5);

   mini.push(4);

   mini.push(3);

   mini.push(2);

   mini.push(1);

   cout<<"Printing minheap Priority queue: ";
   print(mini);                                              // custom recursive func to print priority queue
   cout<<endl;   


  cout<<"Size of min-heap priority queue: "<<maxi.size()<<endl;  
   
   
}


/*
OUTPUT:

Printing maxheap Priority queue: 5 4 3 2 1 
Size of maxheap priority queue: 5
Printing minheap Priority queue: 1 2 3 4 5 
Size of min-heap priority queue: 5

*/
