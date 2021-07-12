import java.util.Scanner ; 

class InsertionSortFun
{
   public int[] insertionSort(int[] arr)
   {
      int i,j;
      for(i=1;i<arr.length;i++)
      {
         int cur=arr[i];
         for(j=i-1;j>=0;j--)
         {
            if(cur<arr[j])
            {
                arr[j+1]=arr[j];
            }
            else
            break;
         }
         arr[j+1]=cur;
      }
      return arr;
   }
   
   public void printArray(int[] arr)
   {
      System.out.print("The elements after sorted are: ");
      for(int i=0;i<arr.length;i++)
      {
          System.out.print(arr[i]+" ");
      }
      System.out.println();
   }

}
class InsertionSort{

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int size=sc.nextInt();
        int[] arr=new int[size];
        System.out.print("Enter the elements: ");
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
        sc.close();
        InsertionSortFun sort=new InsertionSortFun();
        arr=sort.insertionSort(arr);
        sort.printArray(arr);
    }
}
