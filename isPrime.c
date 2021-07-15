#include<stdio.h>
#include<math.h>
int isPrime(int N)
{
    if(N<=1) return 0;
    if(N>3 && (N%2==0 || N%3==0)) return 0;
    int k = 1;
    int a = 6*k-1,b = 6*k+1;
    while(a<=sqrt(N))
    {
        if(N%a==0 || N%b==0) return 0;
        k++;
        a = 6*k-1;
        b = 6*k+1;
    }
    return 1;
}
int main()
{
    int N;
    scanf("%d",&N);
    isPrime(N)==1?printf("Prime"):printf("Not a Prime");
}