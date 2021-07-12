import java.util.Scanner;


class QueueClass
{
    int[] arr;
    int size,front=0,rear=0;
     public QueueClass(int arrsize)
     {
        size=arrsize;
       arr=new int[size];
     }
     public void enqueu(int ele)
     {
        arr[rear]=ele;
        rear=(rear+1)%size;
        System.out.println("Element "+ele+" is successfully inserted");
     }
     public void deque()
     {   int ele;
         ele=arr[front];
         front=(front+1)%size;
         System.out.println("Element "+ele+" is dequed from queue");
        
     }
     public void printAll()
     {
         System.out.print("The elements in queue are: ");
         int i=front;
         int j=rear;
         while(i!=j)
         {
            System.out.print(arr[i]+" ");
            i=(i+1)%5;
         }
           
      
        System.out.println();
     }

     public void printFront()
     {
         System.out.println("The front of the queue is "+arr[front]+" and front index is "+front);
     }
     public void printRear()
     {
         int re=(rear-1)%5;
         System.out.println("The rear of the queue is "+arr[re]+" and rear index is "+re);
     }

}


class Queue 
{
   public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int size,choice,ele;
       System.out.print("Enter the size of queue: ");
       size=sc.nextInt();
       QueueClass qObj=new QueueClass(size);
       while(true)
       {
           System.out.println("1.Enqueue   2.Dequeue   3.PrintAll   4.PrintFront   5.PrintRear   6.Exit");
           System.out.print("Enter your choice: ");
           choice=sc.nextInt();
           switch(choice)
           {
                case 1:
                        if((qObj.rear+1)%size==qObj.front)
                        {
                            System.out.println("OverFlow: Queue is Full");
                            break;
                        }
                        System.out.print("Enter the element to enqueue: ");
                        ele=sc.nextInt();
                        qObj.enqueu(ele);
                        break;   
                case 2:
                      if(qObj.front==qObj.rear)
                      {
                        System.out.println("UnderFlow: Queue is Empty");
                        break;
                      }
                      qObj.deque();
                      break;
                case 3:
                        if(qObj.front==qObj.rear)
                        {
                        System.out.println("Queue is Empty");
                        break;
                        }
                        qObj.printAll();
                        break;
                case 4:
                    if(qObj.front==qObj.rear)
                            {
                            System.out.println("Queue is Empty");
                            break;
                            }
                            qObj.printFront();
                            break;
                case 5:
                        if(qObj.front==qObj.rear)
                        {
                        System.out.println("Queue is Empty");
                        break;
                        }
                        qObj.printRear();
                        break;
                 default:
                 System.out.println("Exiting Program....");
                 break;
            }
            if(choice>5)
            break;
       }
       sc.close();

   }
    
}
