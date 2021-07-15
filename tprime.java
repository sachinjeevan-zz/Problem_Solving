import java.util.*;

public class tprime {
    public static boolean isPrime(int N)
{
    if(N<=1) return false;
    if(N>3 && (N%2==0 || N%3==0)) return false;
    int k=1;
    int a = 6*k-1,b = 6*k+1;
    while(a<=(int)Math.sqrt(N))
    {
        if(N%a==0 || N%b==0) return false;
        k++;
        a = 6*k-1;
        b = 6*k+1;
    }
    return true;
}
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int x = (int)Math.sqrt(N);
        if(x*x==N)
        {
            if(isPrime(x)) System.out.print("T-Prime");
            else System.out.println("Not T-Prime");
        }
        else
        {
            System.out.println("Not a T-Prime");
        }
    }
}
