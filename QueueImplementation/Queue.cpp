
#include <bits/stdc++.h>
using namespace std;

// only size-1 is used efficiently, means 1 array block is left empty

class Queue
{
   public :
     int front=0 ,rear=0,size;
     int *arr;

     Queue(int size)
     {
        this->size=size;
        arr=new int[size];
     }

     void Enqueu(int ele)
     {
       if((rear+1)%size==front)
       {
           cout<<"OverFlow:Queue is Full"<<endl;
       }
       else
       {
          arr[rear]=ele;
          rear=(rear+1)%size;
          cout<<"The element "<<ele<<" is succesfully enqued"<<endl;
       }
     }

     void Dequeu()
     {
         int ele;
         if(front==rear)
         {
             cout<<"UnderFlow:Queue is Empty"<<endl;
         }
         else
         {
           ele= arr[front];
           front=(front+1)%size;
           cout<<"The element dequed is "<<ele<<endl;
         }
     }

     void printQueue()
     {
         int i=front,j=rear;
         if(i==j)
         {
             cout<<"QUeue is Empty"<<endl;
             return;
         }
         cout<<"The elements in queue are: ";
         while(i!=j)
         {
             cout<<arr[i]<<" ";
             i=(i+1)%size;
         }
         cout<<endl;
     }
     void printfront()
     {
         cout<<"The Front of queue is "<<arr[front]<<endl;
     }

     void printrear()
     {
         int re=(rear-1)%size;
        cout<<"The Rear of queue is "<<arr[re]<<endl;
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

