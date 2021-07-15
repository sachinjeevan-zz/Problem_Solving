#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int sqr = ceil(sqrt(N));
    int primes[sqr],k=0;
    int j=1,d=1;
    for(d=2;d<=3;d++)
    {
        while(N%d==0)
        {
            primes[k++] = d;
            N = N/d;
        }
    }
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
        printf("%d ",primes[i]);
    }
}