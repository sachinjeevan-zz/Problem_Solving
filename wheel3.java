import java.util.*;
public class wheel_3
{
public static void main(String args[])
    {
        int N;
        //scanf("%d",&N);
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        int sqr = (int)Math.ceil(Math.sqrt(N));
        int primes[] = new int[sqr],k=0,d;
        for(d=2;d<=5;d++)
        {
            while(N%d==0)
            {
                primes[k++] = d;
                N = N/d;
            }
        }
        int j=1;
        d=7;
        int s[]={4,2,4,2,4,6,2,6};
        int v=0;
        while(d<=sqr)
        {
            while(N%d==0)
            {
                primes[k++] = d;
                N = N/d;
            }
            d+=s[v];
            v++;
            if(v==8) v=0;
            
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


