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



// Sample 1.
// Input:
// 3
// 1 2 3
// Output:
// 6

// Sample 2.
// Input:
// 10
// 7 5 14 2 8 8 10 1 2 3
// Output:
// 140