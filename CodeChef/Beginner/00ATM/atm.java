import java.util.*;

class atm {
    public static void main(String[] args) {
        int withdraw_amt;
        double acc_bal;
        Scanner sc=new Scanner(System.in);
        withdraw_amt=sc.nextInt();
        acc_bal=sc.nextDouble();

       double debit_amt=withdraw_amt+0.50;
        
        if(withdraw_amt%5==0 && debit_amt<=acc_bal )
        {
            acc_bal=acc_bal-debit_amt;
        }
        System.out.println(acc_bal);
    }
}