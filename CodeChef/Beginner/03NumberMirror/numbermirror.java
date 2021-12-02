import java.util.Scanner;

class numbermirror {

    public static int TakeInput(Scanner sc) {
        int n = sc.nextInt();
        sc.close();
        return n;
    }

    public static void PrintOutput(int n) {
        System.out.println(n);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = TakeInput(sc);

        PrintOutput(n);

    }
}