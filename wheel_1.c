#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int sqr = ceil(sqrt(N));
    int primes[sqr],k=0;
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
        printf("%d ",primes[i]);
    }
}