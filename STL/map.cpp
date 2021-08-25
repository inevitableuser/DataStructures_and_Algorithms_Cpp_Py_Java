#include <bits/stdc++.h>
using namespace std;
int main()
{
   map<int,string> mp;              //ordered map which is auto sorted based on key.

   mp[3]="sita";
   mp[12]="rama";
   mp[1]="alluri";


   mp.insert({15,"raju"});      

   cout<<"Before erase: "<<endl;     

   for(auto i:mp)
   {
       cout<<i.first<<":"<<i.second<<endl;
   }
  
   cout<<"finding 13 -> "<<mp.count(13)<<endl;

   cout<<"finding 12 -> "<<mp.count(12)<<endl;

    
   mp.erase(12);


  cout<<"After erase: "<<endl;

   for(auto i:mp)
   {
       cout<<i.first<<":"<<i.second<<endl;
   }

   auto it=mp.find(3);
  
  cout<<"Printing from iterator to end: "<<endl;
  for(auto i=it;i!=mp.end();i++)
  {
      cout<<(*i).first<<":"<<(*i).second<<endl;
  }

}



// OUTPUT:

// Before erase: 
// 1:alluri
// 3:sita
// 12:rama
// 15:raju
// finding 13 -> 0
// finding 12 -> 1
// After erase: 
// 1:alluri
// 3:sita
// 15:raju
// Printing from iterator to end: 
// 3:sita
// 15:raju