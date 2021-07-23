import java.util.Scanner;


class Node
{
    Node lchild;
    int data;
    Node rchild;

    public Node(int data)
    {
        this.data=data;
        this.lchild=null;
        this.rchild=null;
    }
}



class BinaryTreeFunc
{
   public Node head;
   public Node p;
   public Node q;


    public void replace(int ele)
    {
        int node;
        System.out.print("Enter the node you want to replace: ");
        node=BinaryTree.sc.nextInt();
        p=head;
        pre_getAddr(p, node);
        q.data=ele;
    }
    public void preorder(Node p)
    {
        if(p==null)
        {
            return;
        }
        System.out.print(p.data+" ");
        preorder(p.lchild);
        preorder(p.rchild);
    }
    public void Inorder(Node p)
    {
        if(p==null)
        {
            return;
        }
        
        Inorder(p.lchild);
        System.out.print(p.data+" ");
        Inorder(p.rchild);
    }
    public void postorder(Node p)
    {
        if(p==null)
        {
            return;
        }
        postorder(p.lchild);
        postorder(p.rchild);
        System.out.print(p.data+" ");
    }

    public void pre_getAddr(Node p,int leaf)
    {
        if(p==null)
        {
          return;
        }
        if(p.data==leaf)
        {
            q=p;
        }
        pre_getAddr(p.lchild, leaf);
        pre_getAddr(p.rchild, leaf);
    }

    public void Append(int ele)
    {
        int leaf;
        char dir;
        if(head==null)
        {
           head=new Node(ele);
        }
        else
        {
            System.out.print("Enter the leaf you want to append to : ");
            leaf=BinaryTree.sc.nextInt();
            System.out.print("Enter the direction left(l) or right(r): ");
            dir=BinaryTree.sc.next().charAt(0);
            p=head;
            pre_getAddr(p,leaf);
            if(dir=='l')
            {
              q.lchild=new Node(ele);
            }
            else
            {
              q.rchild=new Node(ele);
            }
        }
    }
}
class BinaryTree
{
    static Scanner sc;
    public static void main(String[] args) 
    {
        int ele;
        sc = new Scanner(System.in);
         BinaryTreeFunc bt=new BinaryTreeFunc();
         while(true)
         {
             System.out.println("1.Append   2.preorder   3.Inorder   4.postorder   5.Replace   6.Exit");
             System.out.print("Enter your choice: ");
             int choice=sc.nextInt();
            if(choice==1)
            {
                System.out.print("enter the element: ");
                ele=sc.nextInt();
                bt.Append(ele);
            }
            else if(choice==2)
            {
                bt.preorder(bt.head);
                System.out.println();
            }
            else if(choice==3)
            {
               bt.Inorder(bt.head);
               System.out.println();
            }
            else if(choice==4)
            {
                bt.postorder(bt.head);
                System.out.println();
            }
            else if(choice==5)
            {
                System.out.print("enter the element to put: ");
                ele=sc.nextInt();
                bt.replace(ele);
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

