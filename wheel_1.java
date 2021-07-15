import java.util.*;
public class wheel_1
{
public static void main(String args[])
    {
        int N;
        //scanf("%d",&N);
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        int sqr = (int)Math.ceil(Math.sqrt(N));
        int primes[] = new int[sqr],k=0;
        while(N%2==0)
            {
                primes[k++] = 2;
                N = N/2;
            }
        for(int d=3;d<=sqr;d+=2)
        {
            while(N%d==0)
            {
                primes[k++] = d;
                N = N/d;
            }
        }
        if(N>1)
        {
            primes[k++] = N;
        }
        for(int i=0;i<k;i++)
        {
            System.out.print(primes[i] + " ");
        }
    }
}


