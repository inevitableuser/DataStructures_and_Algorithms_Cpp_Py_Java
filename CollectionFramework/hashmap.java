import java.util.*;

public class hashmap {
    public static void main(String[] args) {
         
        //Map<String,Integer> map=new HashMap<>();               // unordered map

        //Map<String,Integer> map =new LinkedHashMap<>();      // maintains items based on insetion order (similar to dict,ord_dict in py)

 
        Map<String,Integer> map=new TreeMap<>();              // ordered map based on keys.


        map.put("one",1);
        map.put("two",2);
        map.put("five",5);
        map.put("three",3);
        map.put("four",4);

        System.out.println(map);

        if(!map.containsKey("two"))          // checks if key is present in map and returns bool
        map.put("two",222);         

        System.out.println(map);

        map.putIfAbsent("two", 22);         // puts pair into map if key is not present

        System.out.println(map);

        for(var i : map.entrySet())              // entryset() gives list of entries
        {
            System.out.println(i.getKey()+":"+i.getValue());
            System.out.println(i);
        }

        System.out.println(map.entrySet());

        System.out.println(map.keySet());        // keyset() gives the keys list

        System.out.println(map.values());        // values() gives the values list


        System.out.println(map.get("two")); 

        map.put("two",22);               // updates the value of key, if key already present

        System.out.println("value updated to "+map.get("two")); 

        map.remove("two");     // removes the pair from the map based on key

        System.out.println(map);

        System.out.println(map.containsKey("two"));   // returns bool, whether key is present in map or not

        System.out.println(map.containsValue(2));    // returns bool, whether value present in map or not

        System.out.println(map.isEmpty());     // returns true if empty

        map.clear();      // clears the map




    }
}



// OUPUT:   if hashmap used (unordered and fast)

// {four=4, one=1, two=2, five=5, three=3}
// {four=4, one=1, two=2, five=5, three=3}
// {four=4, one=1, two=2, five=5, three=3}
// four:4
// four=4
// one:1
// one=1
// two:2
// two=2
// five:5
// five=5
// three:3
// three=3
// [four=4, one=1, two=2, five=5, three=3]
// [four, one, two, five, three]
// [4, 1, 2, 5, 3]
// 2
// value updated to 22
// {four=4, one=1, five=5, three=3}
// false
// false
// false




// OUTPUT: if LinkedHashMap is used (remembers insertion order)

// {one=1, two=2, five=5, three=3, four=4}
// {one=1, two=2, five=5, three=3, four=4}
// {one=1, two=2, five=5, three=3, four=4}
// one:1
// one=1
// two:2
// two=2
// five:5
// five=5
// three:3
// three=3
// four:4
// four=4
// [one=1, two=2, five=5, three=3, four=4]
// [one, two, five, three, four]
// [1, 2, 5, 3, 4]
// 2
// value updated to 22
// {one=1, five=5, three=3, four=4}
// false
// false
// false




// OUTPUT: if tree map is used (sorts items based on keys)

// {five=5, four=4, one=1, three=3, two=2}
// {five=5, four=4, one=1, three=3, two=2}
// {five=5, four=4, one=1, three=3, two=2}
// five:5
// five=5
// four:4
// four=4
// one:1
// one=1
// three:3
// three=3
// two:2
// two=2
// [five=5, four=4, one=1, three=3, two=2]
// [five, four, one, three, two]
// [5, 4, 1, 3, 2]
// 2
// value updated to 22
// {five=5, four=4, one=1, three=3}
// false
// false
// false