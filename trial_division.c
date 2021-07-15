#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int sqr = ceil(sqrt(N));
    int primes[sqr],k=0;
    
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
        printf("%d ",primes[i]);
    }
}