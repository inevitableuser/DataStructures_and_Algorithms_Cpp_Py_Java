import java.util.*;

class Person
{
    
   String name;
   int age;
   static int count=0;

   public Person()
   {
       // this("johnwick",23);   calling param constructor
       count+=1;
       System.out.println("creating an object "+count);
   }

   public Person(String name,int age)
    {
        this();          // calls default const 
        this.name=name;
        this.age=age;
    }

    void walk()
    {
      System.out.println(name+" is walking");
    }

    void walk(int steps)
    {
        System.out.println(name+" walked "+steps+" steps.");
    }

    void eat()
    {
     System.out.println(name+ " is eating");
    }
}

class Developer extends Person
{
    public Developer(String name,int age)
    {
       super(name,age);                // call parent param constructor
    }

    void walk()
    {
        System.out.println("Developer "+name+" is walking.");
    }

}

class basics
{
  public static void main(String[] args) {

     Scanner sc=new Scanner(System.in);

     Person p1 = new Person();           // calling default constructor
     System.out.print("Enter person name: ");
     p1.name=sc.nextLine();
     System.out.print("Enter person age: ");
     p1.age=sc.nextInt();
     sc.nextLine();                   // to move cursor to next line 

     Person p2;
     System.out.print("Enter person name: ");
     String name=sc.nextLine();
     System.out.print("Enter person age: ");
     int age=sc.nextInt();
     sc.nextLine();
     p2=new Person(name,age);       //calling parameterized Constructor (this wont call default one)

     System.out.println(p1.name+ " "+p1.age);

     System.out.println(p2.name+ " "+p2.age);

     p1.eat();

     p2.walk();
 
     p2.walk(2);

     Developer d1=new Developer("linus torvalds",30);

     d1.walk();


     sc.close();
   }
}



// OUTPUT:

// creating an object 1
// Enter person name: person1
// Enter person age: 23
// Enter person name: person2
// Enter person age: 31
// creating an object 2
// person1 23
// person2 31
// person1 is eating
// person2 is walking
// person2 walked 2 steps.
// creating an object 3
// Developer linus torvalds is walking.