import java.util.*;
public class trial_division
{
public static void main(String args[])
    {
        int N;
        //scanf("%d",&N);
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        int sqr = (int)Math.ceil(Math.sqrt(N));
        int primes[] = new int[sqr],k=0;
        
        for(int d=2;d<=sqr;d++)
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