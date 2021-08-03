#include <bits/stdc++.h>
using namespace std;


void print(queue<string> q)                 // printing is complex in queue if you need iterations go for deque container
{
   if(q.empty())
   {
       return;
   }
   string animal=q.front();                // here we are printing animal first and pop and then recursive call
   cout<<animal<<" ";                      // were as in stack store ele and pop and then recursive call and then print
   q.pop();
   print(q);
}

int main()
{
    queue<string> q;

    q.push("lion");                      // pushing the animal into queue, for deque the func is push_back()

    q.push("tiger");

    q.push("cat");

    cout<<"Elements in queue are: ";
    print(q);                             //custom recursive function for printing queue
    cout<<endl;

    cout<<"First element: "<<q.front()<<endl;                 // gives front element of queue
    
    cout<<"Size of queue before pop: "<<q.size()<<endl;       //gives size of queue


    q.pop();                                                 /*pops the front ele of queue, similar to pop_front in deq in c++
                                                             similar to .poll() in java and .pop(0) in python
                                                              */

    cout<<"Size of queue after pop: "<<q.size()<<endl;       

    cout<<"Elements in queue are: ";
    print(q);
    cout<<endl;

}


/*
OUTPUT:
Elements in queue are: lion tiger cat 
First element: lion
Size of queue before pop: 3
Size of queue after pop: 2
Elements in queue are: tiger cat 
*/
