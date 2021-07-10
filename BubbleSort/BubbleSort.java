
import java.util.Scanner;
class BubbleSort
{
    static int[] Swap(int arr[],int i,int j)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        return arr;
    }
    static void bubbleSort(int arr[])
    {
      int len=arr.length;
      for(int i=0;i<len-1;i++)
      {
          int p=0;
          for(int j=1;j<len-i;j++)
          {
            System.out.println(p+" "+j);
            if(arr[p]>arr[j])
            {
               arr=Swap(arr,p,j);
            }

            p++;
          }
      }
      System.out.print("The elements after bubble sort are: ");
      for(int i=0;i<arr.length;i++)
      {
          System.out.print(arr[i]+" ");
      }
      System.out.println();
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int size=sc.nextInt();
        int[] arr=new int[size];
        System.out.println("Enter the elements in array: ");
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
        sc.close();
        bubbleSort(arr);
        
    }

    
}
