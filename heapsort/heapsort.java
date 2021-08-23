import java.util.*;

class heapsort      // O(nlogn) + O(nlogn) ==> O(nlogn)
{
    
static List<Integer> desc_sort(PriorityQueue<Integer> minheap,List<Integer> Arr)
{
    int l=minheap.size();

    for(int i=0;i<l;i++)                // for n times
    { 
        Arr.set(i,minheap.poll());       // each poll takes O(logn) so tc O(nlogn)
    }
    print(Arr);

    // PriorityQueue<Integer> maxheap=new PriorityQueue<>(Comparator.reverseOrder());
    // maxheap.addAll(Arr);                            // convert entire array to maxheap.
    
    return Arr;
}

static void print(List<Integer> Arr)
{
    System.out.print("Array after heapsort is: ");
    for(var i: Arr)
    {
        System.out.print(i+" ");
    }
    System.out.println();
}
   
public static void main(String[] args) 
  {
      int ele;
      PriorityQueue<Integer> minheap=new PriorityQueue<>();
      List<Integer> Arr=new ArrayList<>();
      System.out.print("Enter your array: ");
      Scanner sc=new Scanner(System.in);
      String[] st=sc.nextLine().split(" ");

      for(int i=0;i<st.length;i++)         // ntimes
      {
          ele=Integer.parseInt(st[i]);
          Arr.add(ele);                   // O(1) so tc is O(n)
      } 

    //   for(int i=0;i<st.length;i++)                                        // n times 
    //   {
    //       ele=Integer.parseInt(st[i]);        
    //       minheap.offer(ele);                                             // each offer takes O(logn) so tc O(nlogn)
    //   }


      minheap.addAll(Arr);             // addAll() here also takes O(nlogn) because it is calling offer n times
                                       // java doesn't has build_heapify which takes O(n) time to build heap from array

      Arr = desc_sort(minheap,Arr);

  } 

}



// OUTPUT

// Enter your array: 4 9 100 1 34 23 57
// Array after heapsort is: 1 4 9 23 34 57 100 