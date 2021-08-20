// set store unique elements in sorted order

#include <bits/stdc++.h>
using namespace std;
int main()
{
   set<int> s;

   s.insert(5);
   s.insert(5);
   s.insert(5);

   s.insert(6);

   s.insert(16);
   s.insert(16);

   s.insert(9);
   s.insert(9);

   s.insert(3);

    for(int i :s)
       cout<<i<<" ";
    cout<<endl;

    set<int>:: iterator it=s.begin();       // it here stores reference to first element
   
    it++;                         // it increments from index 0 to 1

    s.erase(it);        // removes ele at iterator it (it here is pointing to index 1)

    for(auto i :s)
       cout<<i<<" ";
    cout<<endl;


   s.erase(6);        // removes ele 6 from set

    for(auto i :s)         // use auto like var in c#
       cout<<i<<" ";
    cout<<endl;

   cout<<"16 is present or not ? "<<s.count(16)<<endl;       // returns whether element is present or not

   cout<<"5 is present or not? "<<s.count(5)<<endl;

   set<int> :: iterator itr=s.find(9);                      // finds 9 and returns (iterator) reference to 9 
                                                             // if ele not found then returns s.end() iterator

   cout<<"value present at itr: "<<*itr<<endl;
   
    for(auto it=itr;it!=s.end();it++)                        // printing values from 9 to s.end() 
       cout<<*it<<" ";
    cout<<endl;

    cout<<s.size()<<endl;                  // returns size of set s

    s.clear();                            // clears all ele in set

    cout<<s.size()<<endl;

    return 0;

}




// output

// 3 5 6 9 16 
// 3 6 9 16 
// 3 9 16 
// 16 is present or not ? 1
// 5 is present or not? 0
// value present at itr: 9
// 9 16 
// 3
// 0