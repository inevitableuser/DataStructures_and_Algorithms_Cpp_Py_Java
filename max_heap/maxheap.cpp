#include <bits/stdc++.h>
using namespace std;

class maxheap
{
    public:

        vector<int> vect;
        int p=1;

        maxheap()
        {

        }

        void swap(int i,int j)
        {
            int temp=vect.at(i);
            vect.at(i)=vect.at(j);
            vect.at(j)=temp;
        }
        void insert(int i)
        {
            while(i>1 && vect.at(i)>vect.at(i/2))
            {
                swap(i,i/2);
                i=i/2;
            }
        }
        void offer(int ele)
        {
            vect.push_back(ele);
            p+=1;
            int i=vect.size();
            insert(i);

        }
        void poll()
        {

        }
        void peek()
        {

        }
        void print()
        {
            cout<<"printing maxheap: ";
            for(int i=0;i<vect.size();i++)
            {
                cout<<vect.at(i)<<" ";
            }
            cout<<endl;

        }

};

int main()
{
    int choice,ele;
    maxheap max=maxheap();
    while(true)
    {
        cout<<"1.offer   2.poll   3.peek   4.print"<<endl;
        cout<<"enter your choice: ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"enter the ele: ";
            cin>>ele;
            max.offer(ele);
        }
        else if(choice==2)
        {
            max.poll();
        }
        else if(choice==3)
        {
            max.peek();
        }
        else if(choice==4)
        {
            max.print();
        }
        else
        {
            break;
        }

    }
    return 0;
}

