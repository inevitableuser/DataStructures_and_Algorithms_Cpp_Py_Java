import java.util.Scanner;

class reversenum {

    public static int Reverse(int x) {
        String st = String.valueOf(x);
        String ans = "";
        for (int i = st.length() - 1; i >= 0; i--) {
            ans += st.charAt(i);
        }

        return Integer.valueOf(ans);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, x;

        n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            System.out.println(Reverse(x));
        }
        sc.close();
    }
}