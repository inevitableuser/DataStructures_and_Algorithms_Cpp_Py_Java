import java.util.Scanner;
import java.math.BigInteger;

class smallfactorials {

    public static BigInteger fact(int x) {

        // BigInteger bint = new BigInteger("1");
        // BigInteger bint =BigInteger.ONE

        BigInteger bint = BigInteger.valueOf(1);
        for (int i = 2; i <= x; i++) {
            bint = bint.multiply(BigInteger.valueOf(i));
        }
        return bint;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, x;
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            System.out.println(fact(x));

        }
    }
}
