import java.util.*;
public class wheel_2
{
public static void main(String args[])
    {
        int N;
        //scanf("%d",&N);
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        int sqr = (int)Math.ceil(Math.sqrt(N));
        int primes[] = new int[sqr],k=0,d;
        for(d=2;d<=3;d++)
        {
            while(N%d==0)
            {
                primes[k++] = d;
                N = N/d;
            }
        }
        int j=1;
        while(d<=sqr)
        {
            d = 6*j-1;
            while(N%d==0)
            {
                primes[k++] = d;
                N = N/d;
            }
            d = 6*j+1;
            while(N%d==0)
            {
                primes[k++] = d;
                N = N/d;
            }
            j++;
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


