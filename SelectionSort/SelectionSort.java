
import java.util.Scanner;
class SelectionSort
{

    public int[] swap(int arr[],int a,int b)
    {
       int temp;
       
       temp=arr[a];
       arr[a]=arr[b];
       arr[b]=temp;

       return arr;
    }

    public int[] selectionSort(int arr[])
    {
        int i,j,curmin,minindex;
      for(i=0;i<arr.length;i++)
      {
          curmin=arr[i];
          minindex=i;
         for(j=i+1;j<arr.length;j++)
         {
            if(curmin>arr[j])
            {
                minindex=j;
                curmin=arr[j];
            }
         }
         if(i!=minindex)
        arr=swap(arr,i,minindex);
      }
      return arr;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int size;
        System.out.print("Enter the size of array: ");
        size=sc.nextInt();
       
        int arr[]=new int[size];
        for(int i=0;i<size;i++)
        {
          System.out.print("Enter the element "+(i+1)+": ");
           arr[i]=sc.nextInt();
        }
        sc.close();
        SelectionSort ssObj=new SelectionSort();
        arr=ssObj.selectionSort(arr);
        System.out.print("the elements after sorting are: ");
        for(int i=0;i<size;i++)
        {
           System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
