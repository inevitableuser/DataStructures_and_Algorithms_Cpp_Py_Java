import java.util.Scanner;

class luckyfour {
    public static int Count(int x) {
        int a, count = 0;
        while (x != 0) {
            a = x % 10;
            if (a == 4) {
                count++;
            }
            x /= 10;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x, n;
        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            System.out.println(Count(x));
        }
        sc.close();
    }
}