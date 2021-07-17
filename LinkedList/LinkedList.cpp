#include <bits/stdc++.h>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;
       
};

class LinkedList
{
  public:
    Node *head=NULL;
    Node *p,*q;
     int count=0;
    void insert()
    {
      int ele;
      cout<<"Enter the element to insert:";
      cin>>ele;
      if(head==NULL)
      { 
          p=new Node();
          p->data=ele;
          p->next=NULL;
          head=p;
      }
      else 
      {
          p->next=new Node();
          p=p->next;
          p->data=ele;
          p->next=NULL;
      }
      count+=1;
    }
 
     void pop()
     {
         q=head;
         if(q==NULL)
         {
             cout<<"The list is empty"<<endl;
             return;
         }
         if(q->next==NULL)
         {
             cout<<"The element "<<q->data<<" is successfully popped"<<endl;
             head=NULL;
             free(q); 
             count-=1;
             return;
         }
         while(q->next->next!=NULL)
         {
            q=q->next;
         }
         q->next=NULL;
         cout<<"The element "<<p->data<<" is successfully popped"<<endl;
         free(p);
         p=q;
         count-=1;
     }

     void presentsize()
     {
         cout<<"The size of linked list is "<<count<<endl;
     }

    void printList()
    {
       q=head;
       if(q==NULL)
       {
           cout<<"The list is empty"<<endl;
           return;
       }
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
    LinkedList ll=LinkedList();
    while(true)
    {
        cout<<"1.Append    2.pop    3.printList   4.presentsize   5.exit"<<endl;
        cout<<"Enter your choice: ";
        int choice;
        cin>>choice;
       
       if(choice==1)
       {
           ll.insert();
       }
       else if(choice==2)
       {
          ll.pop();
       }
       else if(choice==3)
       {
           ll.printList();
       }
       else if(choice==4)
       {
          ll.presentsize();
       }
       else
       {
           break;
       }
    }


}
