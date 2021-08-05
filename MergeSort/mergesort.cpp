#include <bits/stdc++.h>
using namespace std;


void merge(vector<int> &vect,int start,int mid,int end)
{
   vector<int> left;
   vector<int> right;
    
   left.insert(left.end(),vect.begin()+start,vect.begin()+mid+1);

   right.insert(right.end(),vect.begin()+mid+1,vect.begin()+end+1);
   
   int x=0,y=0;

   for(int i=start;i<=end;i++)
   {
        
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

       if(x==left.size())
       {
           while(y<right.size())
           {
               i++;
               vect[i]=right[y];
               y++;
           }
           break;
       }
       else if(y==right.size())
       {
           while(x<left.size())
           {
            i++;
            vect[i]=left[x]; 
            x++;
           }
           break;
       }
   }
}

void merge_sort(vector<int> &vect,int start,int end)
{
        if(start==end)
        {
            return;
        }

        int mid=(int) (start+end)/2;
        merge_sort(vect,start,mid);
        merge_sort(vect,mid+1,end);
        merge(vect,start,mid,end);
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
    
    cout<<"Elements in vector are: ";
    for(int i:vect)
    cout<<i<<" ";
    cout<<endl;
    
    merge_sort(vect,0,vect.size()-1);

    cout<<"Elements in vector after MergeSort: ";
    for(int i:vect)
    cout<<i<<" ";
    cout<<endl;

    return 0;
}



/*
OUTPUT:

Enter the ele to append: 6
Continue? Y or N: y
Enter the ele to append: 9
Continue? Y or N: y
Enter the ele to append: 90
Continue? Y or N: y
Enter the ele to append: 43
Continue? Y or N: y
Enter the ele to append: 23
Continue? Y or N: y
Enter the ele to append: 1
Continue? Y or N: y
Enter the ele to append: 32
Continue? Y or N: y
Enter the ele to append: 21
Continue? Y or N: n
Elements in vector are: 6 9 90 43 23 1 32 21 
Elements in vector after MergeSort: 1 6 9 21 23 32 43 90 

*/
