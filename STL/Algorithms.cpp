#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    bool ans=binary_search(v.begin(),v.end(),9);       // arg1 is start iterator,arg2 is end iter,arg3 is element to search
    cout<<ans<<endl;

    ans=binary_search(v.begin(),v.end(),6);
    cout<<ans<<endl;

    cout<<"lower bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;      
    //gives the lowerbounditerator of 6 and subtracting with start gives the index


    cout<<*(upper_bound(v.begin(),v.end(),4))<<endl;     // gives the upperbound of 4 present in vector

    cout<<"upperbound: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl; // gives the index of upperbound of 4 present in vector


    cout<<"max: "<<max(2,3)<<endl;

    cout<<"min: "<<min(2,3)<<endl;

    int a=2,b=3;
    swap(a,b);                  // swap call by reference
    cout<<"a is: "<<a<<",b is: "<<b<<endl; 

    string st="abcd";

    reverse(st.begin(),st.end());         // call by reference  (reverses the string)

    cout<<st<<endl;


    cout<<"before rotate: ";
    for(auto i: v) 
     cout<<i<<" ";
     cout<<endl;

    rotate(v.begin(),v.begin()+1,v.end());      // rotate call by reference

    cout<<"after rotate: ";
    for(auto i: v) 
     cout<<i<<" ";
     cout<<endl;

     sort(v.begin(),v.end());                  // intro (insertion,quick,heap) sort call by reference

     for(auto i:v)
     cout<<i<<" ";
     cout<<endl;

     
    








    
    return 0;
}