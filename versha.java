import java.util.Scanner;

public class versha {
    public int solve(int[] a, int n) {
        int i=0;
        int ans=0;
        if(n%2==0) return 0;
        for(i=0;i<n;i=i+2){
            ans=ans^a[i];
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for (int i = 0; i < n; i++) {
            a[i]=in.nextInt();
        }
        versha obj=new versha();
        System.out.println(obj.solve(a,n));
    }
}