import java.util.*;
public class evenfib {
    public static void main(String[] args) {
        int N;
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        int fn6 = 2,fn3 = 8,fn=34;
        int sum = 10;
        while(fn<=N)
        {
            sum+=fn;
            fn6 = fn3;
            fn3 = fn;
            fn = 4*fn3+fn6;
        }
        System.out.print(sum);

    }
}
