import java.util.Scanner;
import java.lang.Math;

class sqroot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, x;
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            System.out.println((int) Math.floor(Math.sqrt(x)));

        }
        sc.close();
    }
}