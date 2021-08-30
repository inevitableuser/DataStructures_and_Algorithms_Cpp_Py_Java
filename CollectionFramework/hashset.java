import java.util.*;

class hashset
{
    public static void main(String[] args) {
        Set<Integer> set=new HashSet<>();          // set is unordered, unique and mutable 
                                                   // set in python and java are unordered, where cpp set is ordered
        /*
             set is unordered, implemented using hashtable
             linked hash set is ordered (insertion order not sorted order),implemented using hashtable
             treeset is ordered(sorted order), implemented using binary search tree


             hashset is implemented by hashmap datastructure.
             linkedhashset is implemented by linked hashmap datastructure (to maintaining insertion order)
             treeset is implemented by treemap datastructure
             

             Both hashset,linkedhashset provide o(1) complicity for inserting, removing, retrieving the object.
             but hash set is little faster than linkedhash set
             where as treeset provide O(logn) complexity for every operation bcz of binary serch tree impl.

        */

        // Set<Integer> set=new LinkedHashSet<>();               (remembers insertion order)

        // Set<Integer> set =new TreeSet<>();                    (sorted set - non decreasing order)


        set.add(5);
        set.add(5);
        set.add(4);
        set.add(3);
        set.add(100);
        
        System.out.println(set);

        set.remove(100);                        //removes ele 100 from set

        System.out.println(set);

        System.out.println(set.contains(5));     //returns bool true if 5 present

        System.out.println(set.isEmpty());       // returns bool true if empty

        System.out.println(set.size());

        System.out.println(set);

        set.clear();              // clears all ele in set

        System.out.println(set);

    }
}



// OUTPUT: if hashset used

// [3, 4, 100, 5]
// [3, 4, 5]
// true
// false
// 3
// [3, 4, 5]
// []



// OUTPUT:  if linkedhashset used

// [5, 4, 3, 100]
// [5, 4, 3]
// true
// false
// 3
// [5, 4, 3]
// []


// OUTPUT:    if treeset used

// [3, 4, 5, 100]
// [3, 4, 5]
// true
// false
// 3
// [3, 4, 5]
// []