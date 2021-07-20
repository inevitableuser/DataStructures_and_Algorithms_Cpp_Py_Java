
#include <bits/stdc++.h>
using namespace std;

//this queue actually uses complete size efficiently

class Queue
{
   public :
     int front=-1 ,rear=-1,size;
     int *arr;

     Queue(int size)
     {
        this->size=size;
        arr=new int[size];
     }

     void Enqueu(int ele)
     {
        int temp;
        if(front==-1 && rear==-1)
        {
            front=rear=0;
        }
        else
        {
         temp=(rear+1)%size;
         if(temp==front)
         {
            cout<<"OverFlow : Queue is full"<<endl;
            return ;
         }
         rear=temp;
        }
        arr[rear]=ele;
       cout<<"Element "<<ele<<" is successfully inserted"<<endl;
     }
      
     void Dequeu()
     {
         int ele;
         if(front==-1 && rear==-1)
         {
            cout<<"UnderFlow: Queue is Empty"<<endl;
            return;
         }
         else if(front==rear)
         {
             ele=arr[front];
             front=rear=-1;
         }
         else
         {
           ele=arr[front];
           front=(front+1)%size;
         }
         cout<<"Element "<<ele<<" is successfully popped out"<<endl;
     }

     void printfront()
     {
         if(front==-1)
         {
             cout<<"Queue is Empty: The front is pointing to NULL"<<endl;
             return;
         }
         cout<<"The front of queue is "<<arr[front]<<endl;
     }
     void printrear()
     {
          if(rear==-1)
         {
             cout<<"Queue is Empty: The rear is pointing to NULL"<<endl;
             return;
         }
         cout<<"The rear of queue is "<<arr[rear]<<endl;
     }

      
    void printQueue()
    {
        int p=front,q=rear;
        if(p==-1 && q==-1)
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        cout<<"Elements in queue are: ";
        while(p!=q)
        {
            cout<<arr[p]<<" ";
            p=(p+1)%size;
        }
        cout<<arr[p]<<" ";
        cout<<endl;

    }

    
};

int main()
{
   int size,choice,ele;
   
   cout<<"Enter the size of array: ";
   cin>>size;
   Queue qObj=Queue(size);
   while(true)
   { 
       cout<<"1.Enque   2.Deque   3.PrintQueue   4.PrintFront   5.PrintRear  6.Exit"<<endl;
       cout<<"Enter your choice: ";
       cin>>choice;
       switch(choice)
       {
           case 1:
              cout<<"Enter the element to enque: ";
              cin>>ele;
              qObj.Enqueu(ele);
              break;
           case 2:
              
              qObj.Dequeu();
              break;

           case 3:
              qObj.printQueue();
              break;
           
           case 4:
               qObj.printfront();
               break;
            case 5:
               qObj.printrear();
               break;
           default:
           break;
       }
       if(choice>=6 || choice<=0)
       {
           break;
       }
   }
}
