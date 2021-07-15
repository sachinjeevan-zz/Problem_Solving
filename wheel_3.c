#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int sqr = ceil(sqrt(N));
    int primes[sqr],k=0;
    int j=1,d=1;
    for(d=2;d<=5;d++)
    {
        while(N%d==0)
        {
            primes[k++] = d;
            N = N/d;
        }
    }
    int s[] = {4,2,4,2,4,6,2,6};
    int v=0;
    d = 7;
    while(d<=sqr)
    {
        while(N%d==0)
        {
            primes[k++] = d;
            N = N/d;
        }
        d+=s[v];
        v++;
        if(v==8)
        {
            v=0;
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