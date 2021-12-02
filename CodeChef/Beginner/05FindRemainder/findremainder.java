import java.util.Scanner;

class findremainder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, a, b;
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            a = sc.nextInt();
            b = sc.nextInt();

            System.out.println(a % b);
        }
        sc.close();
    }
}
