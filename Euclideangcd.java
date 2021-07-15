import java.util.*;
public class Euclideangcd
{
    public static int gcd(int a,int b)
        {
            if(a==0) return b;
            if(b==0) return a;
            return gcd(b,a%b);
        }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A=sc.nextInt(),B=sc.nextInt();
        System.out.print(gcd(A,B))
    }
}