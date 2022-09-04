import java.util.*;

public class adam {
    public static void main(String[] args) {

        Scanner li = new Scanner(System.in);

        int size = li.nextInt();

        ArrayList<Integer> list = new ArrayList<Integer>(size);
        for (int i = 0; i < size; i++) {
            int values = li.nextInt();
            list.add(values);
        }
        list.removeAll(Collections.singleton(0));
        Collections.sort(list);
        while (list.size() > 0) {
            int smallest = list.get(0);
            for (int i = 0; i < list.size(); i++) {

                list.set(i, list.get(i) - smallest);
            }
            list.removeAll(Collections.singleton(0));
            if (list.size() > 0)
                System.out.print(list.size() + " ");
        }
    }

}