import java.util.*;

class _Maxheap
{
   ArrayList<Integer> Arr=new ArrayList<>();

   public _Maxheap()
   {
   }

   public void rebuild()
   {
       int len=(int) Math.ceil((float) Arr.size()/2)-1;

       for(int i=len;i>=0;i--)
       {
          down_heapify(i, Arr.size());
       }
   }

   public void sort()
   {
      int len=Arr.size();
      for(int i=len-1;i>=0;i--)
      {
         swap(0,i);
         down_heapify(0,i);
      }
      print();
      System.out.println("Rebuilding sorted maxheap to maxheap...");
      rebuild();
   }

   private void swap(int child,int parent)
   {
      int temp=Arr.get(child);
      Arr.set(child,Arr.get(parent));
      Arr.set(parent,temp);
   }
   private void down_heapify(int parent,int size)
   {
      int lchild=parent*2+1;
      int rchild=parent*2+2;
      int larg=parent;

      if(lchild<size && Arr.get(lchild)>Arr.get(larg))
      {
         larg=lchild;
      }
      if(rchild<size && Arr.get(rchild)>Arr.get(larg))
      {
        larg=rchild;
      }

      if(larg!=parent)
      {
        swap(larg,parent);
        down_heapify(larg,size);
      }
      
   }
   private void up_heapify()
   {
       int size=Arr.size();
       int child=size-1;
       int parent=(int) Math.ceil((float)child/2)-1;

       while(child>0 && Arr.get(parent)<Arr.get(child))
       {

         swap(child,parent);
         child=parent;
         parent=(int) Math.ceil((float)child/2)-1;

       }

   }

   public void offer(int ele)
   {
      Arr.add(ele);
      up_heapify();
      
   }

   public void poll()
   {
       int len=Arr.size();
       swap(0,len-1);
       int ele=Arr.get(len-1);
       Arr.remove(len-1);
       down_heapify(0,Arr.size());
       System.out.println("the polled ele is: "+ele);
   }

   public void peek()
   {
      System.out.println("The peek of maxheap is: "+Arr.get(0));
   }

   public void print()
   {
       System.out.print("printing maxheap: ");
      for(int i=0;i<Arr.size();i++)
      {
          System.out.print(Arr.get(i)+" ");
      }
      System.out.println();
   }
}
class maxheap
{
    public static void main(String[] args) {
      
         Scanner sc=new Scanner(System.in);
         _Maxheap mheap=new _Maxheap();
         while(true)
         {
             System.out.println("1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit");
             System.out.print("Enter your choice: ");
             int choice;
             choice=sc.nextInt();
             if(choice==1)
             {
                System.out.print("Enter the element to offer: ");
                int ele=sc.nextInt();
                mheap.offer(ele);
             }
             else if(choice==2)
             {
                 if(mheap.Arr.size()!=0)
                     mheap.poll();
                 else System.out.println("UnderFlow maxheap is empty");
             }
             else if(choice==3)
             {
                if(mheap.Arr.size()!=0)
                     mheap.peek();
                else System.out.println("maxheap is empty");
             }
             else if(choice==4)
             {   
                 if(mheap.Arr.size()!=0)
                     mheap.print();
                 else System.out.println("maxheap is empty");
             }
             else if(choice==5)
             {
                if(mheap.Arr.size()!=0)
                        mheap.sort();
                else System.out.println("maxheap is empty");
             }
             else 
             {
                 sc.close();
                 break;
             }
         }
        
    }
}



//OUTPUT:

// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 1
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 2
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 3
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 4
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 5
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 6
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 7
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 8
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 9
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 1
// Enter the element to offer: 10
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 4
// printing maxheap: 10 9 6 7 8 2 5 1 4 3 
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 5
// printing maxheap: 1 2 3 4 5 6 7 8 9 10 
// Rebuilding sorted maxheap to maxheap...
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 4
// printing maxheap: 10 9 7 8 5 6 3 1 4 2 
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 3
// The peek of maxheap is: 10
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 10
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 9
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 8
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 7
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 6
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 5
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 4
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 3
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 2
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// the polled ele is: 1
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 2
// UnderFlow maxheap is empty
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 3
// maxheap is empty
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 4
// maxheap is empty
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 5
// maxheap is empty
// 1.Offer   2.Poll   3.Peek   4.Print   5.sort   6.exit
// Enter your choice: 6