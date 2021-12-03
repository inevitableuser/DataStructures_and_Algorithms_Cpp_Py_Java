import java.util.Arrays;
import java.util.Scanner;
import java.util.Arrays;

class turbosort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n, x;
        n = sc.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            arr[i] = x;
        }
        Arrays.sort(arr);
        for (int i : arr) {
            System.out.println(i);
        }

        sc.close();
    }
}
