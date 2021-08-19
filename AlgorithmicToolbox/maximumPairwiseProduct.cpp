#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,ele,max=0,smax;
    cin>>n;
    vector<int> vect;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        if(ele>=max)
        {
            smax=max;
            max=ele;
        }
        vect.push_back(ele);
    }
    cout<<max*smax<<endl;
    return 0;
}