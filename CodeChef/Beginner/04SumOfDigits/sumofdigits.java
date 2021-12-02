import java.util.Scanner;

class sumofdigits {

    public static int Sum(int x) {
        int sum = 0;
        while (x != 0) {
            sum += (x % 10);
            x /= 10;

        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, x;
        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            System.out.println(Sum(x));
        }
    }
}
