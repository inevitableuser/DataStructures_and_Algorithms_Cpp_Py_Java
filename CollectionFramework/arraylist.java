import java.util.*;
class arraylist
{
    public static void main(String[] args) {
        
        ArrayList<String> boysArray=new ArrayList<>();    

        /* 
        List is interface where arraylist is class implementing list interface methods
        
        arraylist can be non generic
        ArrayList test=new ArrayList();
        
        List is generic type
        List<String> boysArray=new ArrayList<>();


        List is fast and index accessible 
        ArrayList acts as a dynamic array and is slow

        */


 
       boysArray.add("harshad");       //adds element at end of list similar to pushback in c++ and append in python

       boysArray.add("rakesh");

       boysArray.add("abishek");


    System.out.println(boysArray);
    

    boysArray.add(1,"krunal");        //adds element at an index like li.insert in python and insert in c++

    System.out.println(boysArray);   

    ArrayList<String> girlsArr=new ArrayList<>();
    ArrayList<String> classArr=new ArrayList<>();

    girlsArr.add("Ishwarya");

    girlsArr.add("Deepika");

    classArr.addAll(girlsArr);               //adds all ele from girlArr to classArr similar to v1(v2) in c++

    System.out.println(classArr);

    classArr.addAll(0,boysArray);           //appends all studentArray ele to classArr at index 0 similar to insert in c++

    System.out.println(classArr);


    System.out.println(classArr.get(3));

    classArr.remove(3);                      //removes the value based on index

    System.out.println(classArr);

    classArr.remove("Ishwarya");

    System.out.println(classArr);           //removes the value based on value

    classArr.clear();                        //clears the list


    System.out.println(classArr);

    System.out.println(boysArray);

    boysArray.set(1,"hardik");              //sets the element at index position to provided value

    System.out.println(boysArray);

    System.out.println(girlsArr.contains("Ishwarya"));       //checks if item present or not


    System.out.println("Size of girls Array: "+girlsArr.size());       //gives no.of elements present


    System.out.print("Boys present in class are: ");
    for(String s:boysArray)
    System.out.print(s+",");
    System.out.println();

    }
}

