import java.util.Scanner;

class Queue_methods
{
     int front=-1,rear=-1;
     int size=0,fsize=0;
     int[] arr;
    public Queue_methods(int fsize)
    {
       this.fsize=fsize;
       arr=new int[fsize];
    }

    public void enque(int ele)
    {
       if((rear+1)%fsize==front)
       {
          System.out.println("Overflow: queue is full");
          return;
       }
       else if(front==-1 && rear==-1)
       {
           front=0;
           rear=0;
           arr[rear]=ele;
       }
       else
       {
           rear=(rear+1)%fsize;
           arr[rear]=ele;
       }
       System.out.println("Element "+ele+" is successfully enqued");
       size+=1;
    }
    public void deque()
    {
        int ele;
        if(front==-1 && rear==-1)
        {
            System.out.println("UnderFlow: queue is empty");
            return;
        }
        else if(front==rear)
        {
          ele= arr[front];
          front=-1;
          rear=-1;
        }    
        else
        {
            ele= arr[front];
            front=(front+1)%fsize;
        }

        System.out.println("Element "+ele+" is successfully dequed");
        size-=1;

    }
    public void printqueue()
    {
        int p=front;
        int q=rear;
        if(p==-1 && q==-1)
        {
            System.out.println("Queue is empty");
            return;
        }
        System.out.print("Elements in the queue are: ");
       while(p!=q)
       {
         System.out.print(arr[p]+" ");
         p=(p+1)%fsize;
       }
       System.out.print(arr[p]);
       System.out.println();
    }

}

class queue
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size of queue: ");
        int size=sc.nextInt();
        int choice,ele;
        Queue_methods qObj=new Queue_methods(size);
        while(true)
        {
            System.out.println("1.enqueu   2.deque   3.printqueue   4.printsize   5.exit");
            System.out.print("Enter your choice: ");
            choice=sc.nextInt();
            if(choice==1)
            {
               System.out.print("Enter element to insert: ");
               ele=sc.nextInt();
               qObj.enque(ele);

            }
            else if(choice==2)
            {
              qObj.deque();
            }
            else if(choice==3)
            {
              qObj.printqueue();
            }
            else if(choice==4)
            {
              System.out.println("The size of queue is "+ qObj.size);
            }
            else
            {
                sc.close();
                System.out.println("Exiting program");
                break;
            }

        }
    }
}

