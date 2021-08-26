import java.util.*;


class Laptop
{
    private int ram;
    private int price=30000;

    public void setprice(int price)
    {
        boolean isAdmin =false;
        if(!isAdmin)
        {
            System.out.println("you cannot set the price");
        }
        else
        {
            this.price=price;
        }
    }

    public int getprice()
    {
        return price;
    }


}

public class encapsulation {          //making variables private and methods public, and accessing variables only through methods

    public static void main(String[] args) {
        Laptop l1=new Laptop();

        l1.setprice(30);
        System.out.println(l1.getprice()); 
        
    }
    

}
