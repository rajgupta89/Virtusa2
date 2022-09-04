import java.util.*;

public class gokul {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int k = sc.nextInt();
        int lim = a - k + 1;
        int sum = 0;
        int comp = 0;
        int[] arr = new int[a];

        for (int i = 0; i < a; i++) {
            arr[i] = sc.nextInt();
        }
        int limit = 1;
        while (limit <= lim) {

            comp = limit;
            for (int j = 1; j < lim; j++) {

                sum += (j * j) * (arr[comp - 1]);

                comp++;
            }
            System.out.println(sum);
            sum = 0;
            limit++;

        }
    }
}