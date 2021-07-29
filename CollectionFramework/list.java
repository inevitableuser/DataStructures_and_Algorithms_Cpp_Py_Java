import java.util.*;

class linkedlist
{
    public static void main(String[] args) {
        
        List<String> boysList=new LinkedList<>();   //linkedlist datastructure used in background where search takes O(n)

      
        /*
           List<String> test=new ArrayList<>();

           List<String> test2=new LinkedList<>(); 

           these are objects of list interface which contains the methods and 
           these methods are implemented as a dynamic array fashion in arraylist
           and linkedlist fashion in linkedlist classes and it is generic

           ----------------------------------------------------

           list interface doesn't support non-generic 
        
        */

        boysList.add("harshad");       //adds element at end of list similar to pushback in c++ and append in python

       boysList.add("rakesh");

       boysList.add("abishek");


    System.out.println(boysList);
    

    boysList.add(1,"krunal");        //adds element at an index like li.insert in python and insert in c++

    System.out.println(boysList);   

    List<String> girlsList=new LinkedList<>();
    List<String> classList=new LinkedList<>();

    girlsList.add("Ishwarya");

    girlsList.add("Deepika");

    classList.addAll(girlsList);           //adds all ele from girlArr to classArr similar to v1(v2) in c++

    System.out.println(classList);

    classList.addAll(0,boysList);           //appends all studentArray ele to classArr at index 0 similar to insert in c++

    System.out.println(classList);


    System.out.println(classList.get(3));

    classList.remove(3);                      //removes the value based on index

    System.out.println(classList);

    classList.remove("Ishwarya");

    System.out.println(classList);           //removes the value based on value

    classList.clear();                        //clears the list


    System.out.println(classList);

    System.out.println(boysList);

    boysList.set(1,"hardik");              //sets the element at index position to provided value

    System.out.println(boysList);

    System.out.println(girlsList.contains("Ishwarya"));       //checks if item present or not


    System.out.println("Size of girls Array: "+girlsList.size());       //gives no.of elements present


    System.out.print("Boys present in class are: ");
    for(String s:boysList)
    System.out.print(s+" ");
    System.out.println();

    }
}


/*
OUTPUT:

[harshad, rakesh, abishek]
[harshad, krunal, rakesh, abishek]
[Ishwarya, Deepika]
[harshad, krunal, rakesh, abishek, Ishwarya, Deepika]
abishek
[harshad, krunal, rakesh, Ishwarya, Deepika]
[harshad, krunal, rakesh, Deepika]
[]
[harshad, krunal, rakesh, abishek]
[harshad, hardik, rakesh, abishek]
true
Size of girls Array: 2
Boys present in class are: harshad hardik rakesh abishek 

*/
