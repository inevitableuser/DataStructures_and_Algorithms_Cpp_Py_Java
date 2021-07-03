import java.util.Scanner;

class Main{

   public int BinarySearch(int arr[],int n,int key)
  {
     int i=0,j=n-1,mid;
     while(i<=j)
     {
       mid=(i+j)/2;
       if(arr[mid]==key)
       {
         return mid;
       }
       else if(arr[mid]>key)
       {
         j=mid-1;
       }
       else
       {
         i=mid+1;
       }
     }
      return -1;
  }

  public static void main(String[] args) 
  {
    Scanner sc=new Scanner(System.in);
    int n,key;
    System.out.print("enter the size of array: ");
    n=sc.nextInt();
    int arr[]=new int[n];
    for(int i=0;i<n;i++)
    {
      System.out.print("enter the element "+(i+1)+" :");
      arr[i]=sc.nextInt();
    }
    System.out.print("Enter the key to search: ");
    key=sc.nextInt();
    Main search=new Main();
    int res_index=search.BinarySearch(arr,n,key);
    if(res_index!=-1)
    {
      System.out.println("Key found in array at index "+res_index);
    }
    else
    System.out.println("key not found in array");
  }
}