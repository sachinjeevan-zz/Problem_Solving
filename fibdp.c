#include<stdio.h>
#include<math.h>
long long int fib(long long int n,long long int arr[])
{
    if(n<=1) 
    {
        arr[n] =  n;
        return n;
    }
    else 
    {
        long long int a;
        if(arr[n-1]==-1)
        {
            a = fib(n-1,arr);
        }
        else
        {
            a = arr[n-1];
        }
       long long int b;
       if(arr[n-2]==-1)
       {
            b = fib(n-2,arr);
       }
       else
       {
            b = arr[n-2];
       }
       arr[n] = a+b;
       return a+b;
    }
}
int main()
{
    long long int  n;
    scanf("%lld",&n);
    long long int arr[n+1];
    for(long long int i=0;i<=n;i++)
    {
        arr[i] = -1;
    }
    printf("%lld",fib(n,arr));
}