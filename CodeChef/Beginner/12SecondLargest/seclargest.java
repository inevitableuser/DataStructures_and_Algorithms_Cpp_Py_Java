import java.util.Scanner;

class seclargest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, a, b, c;
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();

            if (a >= b && a >= c) {
                if (b >= c)
                    System.out.println(b);
                else
                    System.out.println(c);
            }
            if (b >= a && b >= c) {
                if (a >= c)
                    System.out.println(a);
                else
                    System.out.println(c);
            }
            if (c >= a && c >= b) {
                if (a >= b)
                    System.out.println(a);
                else
                    System.out.println(b);
            }

        }
        sc.close();
    }
}