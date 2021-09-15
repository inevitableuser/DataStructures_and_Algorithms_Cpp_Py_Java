import java.util.*;

public class arrays {
   
    public static void main(String[] args) {
        
        int[] numbers={1,2,3,4,5,6,7,8,9,10};

        int index=Arrays.binarySearch(numbers, 7);          // binary search func to search in o(logn) time 
                                                           //  arg1=Arrayname  arg2=key to find

        System.out.println("the number "+numbers[index]+" is present at index: "+index);

        int[] digits={9,8,7,6,5,4,3,2,1};

        Arrays.sort(digits);              // sort in ascending order

        System.out.print("Sorted digits: ");
        for(int i: digits)
        {
            System.out.print(i+" ");
        }
        System.out.println();

        Arrays.fill(digits,12);              // fills all the existing elements in digits array to 12

        System.out.print("printing digits array: ");
        for(int i: digits)
        {
            System.out.print(i+" ");
        }
        System.out.println();

        //min 8192 elements present in array to perform paralled sort (uses multi threading)

        int[] bigarray=new int[10000];
        int x=0;
        for(int i=10000;i>=1;i--)
        {
           bigarray[x]=i;
           x++;
        }

        Arrays.parallelSort(bigarray);

        System.out.print("sorted bigarray: ");
        for(int i: bigarray)
        {
            System.out.print(i+" ");
        }
       System.out.println();

    }
}


// OUTPUT:

// the number 7 is present at index: 6
// Sorted digits: 1 2 3 4 5 6 7 8 9 
// printing digits array: 12 12 12 12 12 12 12 12 12 
// sorted bigarray: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20.................