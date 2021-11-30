import java.util.*;

class enormous {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x, y, z, count = 0;
        x = sc.nextInt();
        y = sc.nextInt();
        for (int i = 0; i < x; i++) {
            z = sc.nextInt();
            if (z % y == 0) {
                count++;
            }
        }
        System.out.println(count);

    }
}