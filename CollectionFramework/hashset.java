import java.util.*;

class hashset
{
    public static void main(String[] args) {
        Set<Integer> set=new HashSet<>();          // set is unordered, unique and mutable 
                                                   // set in python and java are unordered, where cpp set is ordered
        /*
             set is unordered, implemented using hashtable
             linked has set is ordered (insertion order not sorted order),implemented using hashtable
             
             hashset is implemented by hashmap datastructure.
             linkedhashset is implemented by linked hashmap datastructure (to maintaing insertion order)

             Both provide o(1) complicity for inserting, removing, retrieving the object.
             but hash set is little faster than linkedhash set

        */
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

    }
}