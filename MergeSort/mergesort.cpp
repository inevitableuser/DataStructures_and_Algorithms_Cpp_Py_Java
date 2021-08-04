#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


void merge(vector<int> &vect,int start,int mid,int end)
{
   vector<int> left;
   vector<int> right;
    
   left.insert(left.end(),vect.begin()+start,vect.begin()+mid+1);

   right.insert(right.end(),vect.begin()+mid+1,vect.begin()+end+1);
   
   int x=0,y=0;

   for(int i:left)
    cout<<i<<" ";
    cout<<endl;

    for(int i:right)
    cout<<i<<" ";
    cout<<endl;

   for(int i=0;i<vect.size();i++)
   {

    for(int i:vect)
    cout<<i<<" ";
    cout<<endl;

       if(left[x]<right[y])
       {
           vect[i]=left[x];
           x++;
       }
           
       else
       {
           vect[i]=right[y];
           y++;
       }

       if(x>mid || y>end)
       {
           if(x>mid && y<end)
           {
                while(y<=end)
                {
                    vect[i]=right[y];
                    y++;
                }
                break;
           }
           else 
           {
                while(x<=mid)
                {
                    vect[i]=left[x];
                    x++;
                }
                break;
           }
       }
        
   }



   
   

}

void merge_sort(vector<int> &vect,int start,int end)
{
    static int count;
    if(start<end)
    {
        count+=1;
        int mid=(int) (start+end)/2;
        cout<<start<<" "<<end<<" "<<mid<<endl;
        merge_sort(vect,start,mid);
        merge_sort(vect,mid+1,end);

        merge(vect,start,mid,end);
    }
}

int main()
{
    vector<int> vect;
    int ele;
    char ch;
    
    while(ch!='N' && ch!='n')
        {
            cout<<"Enter the ele to append: ";
            cin>>ele;
            vect.push_back(ele);
            cout<<"Continue? Y or N: ";
            cin>>ch;
        }
    

    for(int i:vect)
    cout<<i<<" ";
    cout<<endl;
    
    merge_sort(vect,0,vect.size()-1);


    for(int i:vect)
    cout<<i<<" ";
    cout<<endl;

    return 0;
}


