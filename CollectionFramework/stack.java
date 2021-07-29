import java.util.*;

public class stack
{
    public static void main(String[] args) {
        
        Stack<String> animals = new Stack<>();

        animals.push("Lion");           //pushing animal into stack .add() can also be used

        animals.push("Dog");

        animals.push("horse");

        animals.push("Cat");
        
        System.out.println("Stack: "+animals);

        System.out.println("The bottom animal of stack is "+ animals.elementAt(0));      //element at particular index in stack

        System.out.println("size of stack before pop is "+animals.size());     //present no.of animals in the stack

        animals.pop();                 //pop animal from animals stack

        System.out.println("size of stack after pop is "+animals.size());       

        System.out.println("The top animal of stack is "+animals.peek());      //top of stack

        System.out.println("Stack: "+animals);

        System.out.println("stack is empty? "+animals.empty());               //returns boolean true if empty
        
        
        System.out.print("Animals in stack are: ");                           //traversing is possible here not like c++
        for(String s:animals)
        System.out.print(s+" ");
        System.out.println();
    }
}



/*
OUTPUT: 

Stack: [Lion, Dog, horse, Cat]
The bottom animal of stack is Lion
size of stack before pop is 4
size of stack after pop is 3
The top animal of stack is horse
Stack: [Lion, Dog, horse]
stack is empty? false
Animals in stack are: Lion Dog horse 
*/
