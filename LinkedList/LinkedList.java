import java.util.Scanner;

class Node
{
    int data;
    Node next;
    public Node(int data)
    {
      this.data=data;
      this.next=null;
    }
}

class LinkedList
{
    Node head=null;
    Node p=null;
    Node q=null;
    int size=0;
     void insert(int ele)
    {
       if(head==null)
       {
           p=new Node(ele);
           head=p;
       }
       else
       {
         p.next=new Node(ele);
         p=p.next;
       }
       size+=1;
    }

    void pop()
    {
        q=head;
        if(q==null)
        {
            System.out.println("linked list is empty");
            return;
        }
        if(q.next==null)
        {
            System.out.println("Element "+q.data+" is successfully popped");
           head=null;
           p=head;
           size-=1;
           return;
        }
        while(q.next!=p)
        {
            q=q.next;
        }
        System.out.println("Element "+p.data+" successfully popped");
        q.next=null;
        p=q;
        size-=1;
    }
    void printList()
    {
        if(head==null)
        {
            System.out.println("The List is Empty");
            return;
        }
        System.out.print("The elements in Linked List are: ");
        q=head;
        while(q!=null)
        {
            System.out.print(q.data+" ");
            q=q.next;
        }
        System.out.println();
    }
    public static void main(String[] args)
    {
      int ele;
      LinkedList ll=new LinkedList();
      Scanner sc=new Scanner(System.in);
      while(true)
      {
          System.out.println("1.Insert   2.Pop   3.PrintList   4.presentsize   5.exit");
          System.out.print("Enter your choice: ");
          int choice=sc.nextInt();
          if(choice==1)
          {
              System.out.print("Enter the element to insert: ");
              ele=sc.nextInt();
              ll.insert(ele);
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
              System.out.println("The size of Linkedlist is "+ll.size);
          }
          else
          {
             sc.close();
             break;
          }
      }
    }
}
