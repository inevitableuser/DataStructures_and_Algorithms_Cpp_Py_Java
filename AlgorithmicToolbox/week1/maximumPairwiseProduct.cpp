#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,ele,max=0,smax;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        if(ele>=max)
        {
            smax=max;
            max=ele;
        }
        if(ele>smax && ele!=max)
        {
            smax=ele;
        }
    }
    cout<<(long)max*smax<<endl;
    return 0;
}
