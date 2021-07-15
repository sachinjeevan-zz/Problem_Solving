#include<stdio.h>
int exponent(int m,int n)
{
    if(n>=1)
    {
        if(n%2==0)
        {
            return exponent(m*m,n/2);
        }
        else
        {
            return m*exponent(m,n-1);
        }
    }
    else{
        return 1;
    }
}
int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int ans = exponent(M,N);
    printf("%d",ans);
}

n = 32

n = 16


n = 8

n = 4


n = 2


n = 1