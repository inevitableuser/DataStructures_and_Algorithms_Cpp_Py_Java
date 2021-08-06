import java.util.*;

class Merge_Sort
{
    ArrayList<Integer> arr=new ArrayList<>();
    public Merge_Sort(ArrayList<Integer> array)
    {
        this.arr=array;
    }

    public void merging(int start,int mid,int end)
    {
       ArrayList<Integer> left = new ArrayList<>(arr.subList(start, mid+1));         // slice the arr from start index to mid index
       ArrayList<Integer> right = new ArrayList<>(arr.subList(mid+1, end+1));        // slice the arr from mid+1 index to end index
       
       int x=0,y=0;

       for(int i=start;i<=end;i++)
       {
           if(left.get(x)<right.get(y))
           {
               arr.set(i,left.get(x));
               x++;
           }
           else 
           {
               arr.set(i,right.get(y));
               y++;
           }

           if(x==left.size())
           {
              while(y<right.size())
              {
                 i++;
                 arr.set(i,right.get(y));
                 y++;
              }
              break;
           }
           else if(y == right.size())
           {
               while(x<left.size())
               {
                i++;
                arr.set(i,left.get(x));
                x++;
               }
               break;
               
           }

       }
    }

    public void mergesort(int start,int end)
    {
        if (start == end)
        {
            return;
        }
        int mid=(int) (start+end)/2;
        mergesort(start,mid);
        mergesort(mid+1,end);
        merging(start,mid,end);
    }

    

    public void printArr()
    {
        System.out.println(arr);
    }
    
}

class mergesort
{  
      public static void main(String[] args)
    {
        ArrayList<Integer> arr=new ArrayList<>();
        char ch='Y';
        int ele;
        Scanner sc=new Scanner(System.in);
        while(ch!='N' && ch!='n')
        {
            System.out.print("Enter the element:");
            ele=sc.nextInt();
            arr.add(ele);
            System.out.print("Continue ? Y or N: ");
            ch=sc.next().charAt(0);
        }
       
        Merge_Sort msort=new Merge_Sort(arr);

        System.out.println("ArrayList before merge sort: ");
        msort.printArr();

        msort.mergesort(0,arr.size()-1);

        System.out.println("ArrayList after merge sort: ");
        msort.printArr();

    }
}


/*
OUTPUT:
Enter the element:65
Continue ? Y or N: y
Enter the element:34
Continue ? Y or N: y
Enter the element:90
Continue ? Y or N: y
Enter the element:1
Continue ? Y or N: y
Enter the element:23
Continue ? Y or N: y
Enter the element:96
Continue ? Y or N: y
Enter the element:5
Continue ? Y or N: y
Enter the element:76
Continue ? Y or N: n
ArrayList before merge sort: 
[65, 34, 90, 1, 23, 96, 5, 76]
ArrayList after merge sort: 
[1, 5, 23, 34, 65, 76, 90, 96]

*/
