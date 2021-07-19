# include <bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node 
{
public:
   Node *prev;
   int data;
   Node *next;

   Node(int data)
   {
      this->data=data;
      this->prev=NULL;
      this->next=NULL;
   }
   
};
class DoubleLinkedList
{
   public:
    Node *head;
    Node *p;
    Node *q;
    int size;
        void insert(int ele)
        {
           if(head==NULL)
           {
               p=new Node(ele);
               head=p;
           }
           else
           {
               p->next=new Node(ele);
               p->next->prev=p;
               p=p->next;
           }
           size+=1;
        }

        void pop()
        {
           if(head==NULL)
           {
               cout<<"The list is empty"<<endl;
               return;
           }
           else if(head->next==NULL)
           {
               cout<<"the element "<<head->data<<" is succesfully popped out"<<endl;
               free(p);
               head=NULL;
           }
           else 
           {
             p=p->prev;
             q=p->next;
             cout<<"the element "<<q->data<<" is succesfully popped out"<<endl;
             free(q);
             p->next=NULL;
           }
           size-=1;
        }

        void printreverse()
        {
            if(head==NULL)
            {
                 cout<<"The list is empty"<<endl;
                return;
            }
            else 
            {
                q=p;
                cout<<"the reverse of list is: ";
                while(q!=NULL)
                {
                  cout<<q->data<<" ";
                  q=q->prev;
                }
                cout<<endl;
            }
        }

        void printList()
        {
            if(head==NULL)
            {
                cout<<"The list is empty"<<endl;
                return;
            }
            q=head;
            cout<<"The elements in list are: ";
          while(q!=NULL)
          {
              cout<<q->data<<" ";
              q=q->next;
          }
          cout<<endl;
        }
};

int main()
{
    int choice,ele;
    DoubleLinkedList dll=DoubleLinkedList();
    while(true)
    {
        cout<<"1.append   2.pop   3.printlist   4.size   5.reverse   6.exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter the element to insert in list: ";
             cin>>ele;
             dll.insert(ele);
        }
        else if(choice==2)
        {
            dll.pop();
        }
        else if(choice==3)
        {
            dll.printList();
        }
        else if(choice==4)
        {
            cout<<"The size of double linked list is "<<dll.size<<endl;
        }
        else if(choice==5)
        {
            dll.printreverse();
        }
        else
        {
            cout<<"Exiting program"<<endl;
            break;
        }
    }
    return 0;
}

