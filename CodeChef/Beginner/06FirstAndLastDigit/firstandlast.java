import java.util.Scanner;

class firstandlast {

    public static int Sum(int x) {
        int sum, a = 0;
        sum = (x % 10);
        while (x != 0) {
            a = (x % 10);
            x /= 10;
        }
        sum += a;
        return sum;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n, x;
        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            System.out.println(Sum(sc.nextInt()));
        }
        sc.close();

    }

}
