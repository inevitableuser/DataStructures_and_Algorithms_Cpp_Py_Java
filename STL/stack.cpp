#include <bits/stdc++.h>
using namespace std;

void print_stack(stack<string> s)
{
    if(s.empty())
    {
      return;
    }

    string animal=s.top();
    s.pop();
    print_stack(s);
    cout<<animal<<" ";
}
int main()
{
   stack<string> s;        

   /*
     printing the stack using container is difficult because iterating
     or index access is not possible using the container
     better create using vector 
    */
   
   s.push("Tiger");
   s.push("Lion");
   s.push("Dog");

   cout<<"Elements in stack: ";
    
   cout<<"Top animal: "<<s.top()<<endl;

   s.pop();

   cout<<"Top animal: "<<s.top()<<endl;

   cout<<"Size of stack: "<<s.size()<<endl;

   cout<<"is Empty? : "<<s.empty()<<endl;
   
   cout<<"Elements in stack: ";
   print_stack(s);
   cout<<endl;

   cout<<"size of stack: "<<s.size()<<endl;
   
  
  return 0;
}


/*
OUTPUT:

Elements in stack: Top animal: Dog
Top animal: Lion
Size of stack: 2
is Empty? : 0
Elements in stack: Tiger Lion 
size of stack: 2

*/


