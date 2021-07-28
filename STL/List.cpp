#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;

    /*
         list is a doubly linked list with two pointers 
         one at front and one at rear 
         direct access is not possible in the list
    */

    list<int> l(5,100);

    cout<<"list with 100's: ";
    for(int i: l)
    cout<<i<<" ";
    cout<<endl;

    li.push_back(1);                                                       //pushing at back of list

    li.push_front(2);                                                     //pushing at  front of list

    li.push_front(3);

    li.push_back(40);

    li.push_front(6);

    li.push_back(7);

    list<int> copyofli(li);                                              //initialising copyof li with li (simply copying)                                     

    cout<<"Elements in list are: ";
    for(int i:li)
    cout<<i<<" ";
    cout<<endl;

    cout<<"Elements in copiedlist are: ";
    for(int i:copyofli)
    cout<<i<<" ";
    cout<<endl;

    li.pop_back();                                                      //pop from back

    li.pop_front();                                                    //pop from front
    
    li.erase(li.begin());                                              //erase the begin item

    cout<<"Elements in list after erase: ";                            
    for(int i:li)
    cout<<i<<" ";
    cout<<endl;

    cout<<"size of list: "<<li.size()<<endl;                           //printing size of list

    li.push_back(2);

    cout<<"Elements in list before sort: ";                            
    for(int i:li)
    cout<<i<<" ";
    cout<<endl;

    li.sort();                                                         //sorting the list

    cout<<"Elements in list after sort: ";                            
    for(int i:li)
    cout<<i<<" ";
    cout<<endl;

    li.unique();                                                       //remove duplicates in list

    cout<<"Elements in list after unique: ";                            
    for(int i:li)
    cout<<i<<" ";
    cout<<endl;

    li.insert(li.begin(),100);                               //insert ele in list at particular index

    cout<<"Elements in list after insert: ";                            
    for(int i:li)
    cout<<i<<" ";
    cout<<endl;

    li.reverse();                                           //reverse the list

    cout<<"Elements in list after reverse: ";                            
    for(int i:li)
    cout<<i<<" ";
    cout<<endl;
    
    cout<<"The value at front of list: "<<*li.begin()<<endl;              //begin points to front element

    cout<<"The value at front of list: "<<li.front()<<endl;              //prints first element

    cout<<"The exact value at end pointer :"<<*li.end()<<endl;           //list end pointer points to ele next to last element

    cout<<"The value at end of list: "<<*(--li.end())<<endl;             //pre decremeting the end pointer will give last element

    cout<<"The value at back of list: "<<li.back()<<endl;                //prints last element
 

    cout<<"Printing using pointers: "<<endl;                                //printing list using pointers
    for(list<int>::iterator i=li.begin();i!=li.end();i++)
    {
         cout<<*i<<endl;
    }


    return 0;
}



/*
OUTPUT:

list with 100's: 100 100 100 100 100 
Elements in list are: 6 3 2 1 40 7 
Elements in copiedlist are: 6 3 2 1 40 7 
Elements in list after erase: 2 1 40 
size of list: 3
Elements in list before sort: 2 1 40 2 
Elements in list after sort: 1 2 2 40 
Elements in list after unique: 1 2 40 
Elements in list after insert: 100 1 2 40 
Elements in list after reverse: 40 2 1 100 
The value at front of list: 40
The value at front of list: 40
The exact value at end pointer :4
The value at end of list: 100
The value at back of list: 100
Printing using pointers: 
40
2
1
100

*/
