import java.util.*;

class quicksorting {
    List<Integer> Arr;

    public quicksorting(List<Integer> Arr) {
        this.Arr = Arr;
    }

    public void swap(int i, int j) {
        int temp = Arr.get(i);
        Arr.set(i, Arr.get(j));
        Arr.set(j, temp);
    }

    public int partition(int start, int end) {
        int i = start - 1;
        int pivot = Arr.get(end);
        for (int j = start; j < end; j++) {
            if (Arr.get(j) <= pivot) {
                i++;
                swap(i, j);
            }
        }
        swap(i + 1, end);

        return i + 1;
    }

    public void quicksort(int start, int end) {
        if (start < end) {
            int q = partition(start, end);
            quicksort(start, q - 1);
            quicksort(q + 1, end);
        }

    }

    public void printArr() {
        System.out.print("Array after quicksorting: ");
        System.out.print(Arr);
        System.out.println();
    }
}

class quicksort {
    public static void main(String[] args) {

        List<Integer> Arr = new ArrayList<>();

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Array to sort: ");
        String st = sc.nextLine();
        for (String i : st.split(" ")) {
            Arr.add(Integer.parseInt(i));
        }

        quicksorting qsort = new quicksorting(Arr);

        qsort.quicksort(0, Arr.size() - 1);

        qsort.printArr();

        sc.close();

    }
}

