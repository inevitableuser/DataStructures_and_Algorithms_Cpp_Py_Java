import java.util.Scanner;
class StackImplementation
{
    static int top=-1;
 
    public void printstack(int arr[])
    {
        System.out.print("The elements in stack are : ");
     for(int i=0;i<=top;i++)
     {
         System.out.print(arr[i]+" ");
     }
     System.out.println();
    }
    public int pop(int arr[])
    {
        int ele;
        ele= arr[top--];
        return ele;
    }
    public int[] push(int arr[],int ele)
    {
        arr[++top]=ele;
        return arr;
    }
    public static void main(String[] args)
    {
        
        int n,choice,ele;
        System.out.print("Enter the size of array: ");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int[] arr=new int[n];
        StackImplementation stack=new StackImplementation();
        while(true)
        {
            System.out.println("1.Push ");
            System.out.println("2.PoP ");
            System.out.println("3.Print Stack ");
            System.out.println("4.PrintTop ");
            System.out.println("5.Exit ");
            System.out.print("Enter your choice: ");
            choice=sc.nextInt();
            switch(choice)
            {
                case 1:
                   if(top==(n-1))                 
                   {
                    System.out.println("Overflow : Stack is Full ");
                    break;
                   }
                   System.out.print("Enter the element to push: ");
                   ele=sc.nextInt();
                   arr=stack.push(arr,ele);
                   System.out.println("The element "+ele+" is successfully pushed into the stack");
                   break;
                case 2:
                 if(top==-1)
                  {
                    System.out.println("UnderFlow : Stack is Empty ");
                    break;
                 }
                  ele=stack.pop(arr);
                  System.out.println("The element "+ele+" is successfully popped out from stack");
                  break;
                case 3:
                   if(top==-1)
                   {
                    System.out.println("stack is empty");
                    break;
                   }
                   stack.printstack(arr);
                   break;
                case 4:
                   if(top==-1)
                   {
                    System.out.println("top is pointing to null , stack is empty");
                    break;
                   }   
                    System.out.println("Top element of the stack is "+arr[top]);
                    break;
                case 5:
                 break;
            }
            if(choice==5)
            break;
        }
    }
}
