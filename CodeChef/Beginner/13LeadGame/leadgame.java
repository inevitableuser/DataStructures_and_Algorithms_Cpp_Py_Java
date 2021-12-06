import java.util.Scanner;

class leadgame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, a, b, p1 = 0, p2 = 0, max = 0, winner = 0;
        n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            a = sc.nextInt();
            b = sc.nextInt();

            p1 += a;
            p2 += b;

            if (p1 > p2 && (p1 - p2) > max) {
                max = p1 - p2;
                winner = 1;
            } else if (p2 > p1 && (p2 - p1) > max) {
                max = p2 - p1;
                winner = 2;
            }
        }
        sc.close();
        System.out.println(winner + " " + max);
    }
}