#include <bits/stdc++.h>
using namespace std;
int top=-1;

void push(int arr[],int ele)
{
   top+=1;
   arr[top]=ele;
   cout<<"element "<<ele<<" succesfully inserted into stack"<<endl;
}
int pop(int arr[])
{
    int ele;
    ele=arr[top--];
    return ele;
}
void printstack(int arr[])
{
    cout<<"The elements in stack are: ";
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size,choice,ele;
    cout<<"enter the size of stack: ";
    cin>>size;
    int arr[size];
    while(1)
    {
       cout<<"1.Push"<<endl;
       cout<<"2.Pop"<<endl;
       cout<<"3.print"<<endl;
       cout<<"4.printTop"<<endl;
       cout<<"5.exit"<<endl;
       cout<<"Enter your choice: ";
       cin>>choice;
       switch(choice)
       {
           case 1:
               if(top==size-1)
               {
                 cout<<"Overflow : stack is full"<<endl;
                 break;
               }
               cout<<"enter the element to push: ";
               cin>>ele;
               push(arr,ele);
               break;
          case 2:
             if(top==-1)
             {
               cout<<"Underflow stack is empty"<<endl;
               break;
             }
             ele=pop(arr);
             cout<<"the element "<<ele<<" succesfully popped out"<<endl;
             break;
         case 3:
            if(top==-1)
            {
                cout<<"stack is empty"<<endl;
                break;
            }      
            printstack(arr);
            break;
        case 4:
            if(top==-1)
            {
                cout<<"top is pointing to null"<<endl;
                break;
            }
            cout<<"The present top of stack is "<<arr[top]<<endl;
            break;
        case 5:
            break;
       }
       if(choice==5)
       break;

    }



}
