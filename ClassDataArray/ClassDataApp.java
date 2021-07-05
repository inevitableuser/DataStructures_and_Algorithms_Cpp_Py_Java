
class Person
{
    String firstName;
    String lastName;
    int age;

  public Person(String firstName,String lastName,int age)
  {
     this.firstName=firstName;
     this.lastName=lastName;
     this.age=age;
  }

}

class ClassDataArray
{
Person[] personArr;
int maxsize;
int arrsize=0;
  public ClassDataArray(int maxsize)
  {
     this.maxsize=maxsize;
     personArr=new Person[maxsize];
  }

  public void insert(Person pobj)
  {
    personArr[arrsize++]=pobj;
  }

  public String find(String FirstName)
  {
     for(int i=0;i<arrsize;i++)
     {
         if(personArr[i].firstName==FirstName)
         {
             Person p=personArr[i];
             return p.firstName+" "+p.lastName+" "+p.age;
         }
     }
     return "Person not found";
  }

  public void displayAll()
  {
    for(int i=0;i<arrsize;i++)
    {
            Person p=personArr[i];
            System.out.println(p.firstName+" "+p.lastName+" "+p.age);
    }
  }
 
   public boolean delete(String FirstName)
   {
       boolean flag=false;

       for(int i=0;i<arrsize;i++)
       {
        if(personArr[i].firstName==FirstName)
        {
            flag=true;
            for(int j=i;j<arrsize-1;j++)
            {
                personArr[j]=personArr[j+1];      
            } 
        }
       }
    return flag;
   }
}

class ClassDataApp
{
    public static void main(String[] args)
    {
        ClassDataArray arr=new ClassDataArray(10);
        arr.insert(new Person("Aryan","kumar",27));
        arr.insert(new Person("shanmuk","kumar",37));
        arr.insert(new Person("milka","singh",32));
        arr.insert(new Person("bagath","singh",22));
        arr.insert(new Person("subash","chandh",29));
        arr.insert(new Person("vallbai","patel",21));
        arr.displayAll();
        boolean deleteack=arr.delete("milka");
        System.out.println("delete is "+deleteack+" deleted milka");
        System.out.println();
        arr.displayAll();
    }
  
}
