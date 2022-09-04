import java.util.*;
class MyClass {
     public static void main(String[] args) {
         Scanner in=new Scanner(System.in);
         int x=in.nextInt();
         int y=in.nextInt();
         int[] a=new int[x];
         for(int i=0;i<x;i++)
           a[i]=in.nextInt();
        ArrayList<Integer> li=new ArrayList<>();
        for(int i=0;i<y;i++){
           int b=in.nextInt();
           li.add(b);
        }
        for(int i=0;i<x;i++){
            if(! li.contains(a[i])){
               System.out.print(a[i]+" ");
            }
        }
     }    
}