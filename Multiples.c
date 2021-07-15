#include<stdio.h>
int sn(int a1,int an,int n)
{
    return n/2.0*(a1+an);
}
int main()
{
    int m;
    scanf("%d",&m);
    int a1,an,n;
    a1 = 3;
    n = m/3;
    an = a1*n;
    int s3 = sn(a1,an,n);
    a1 = 5;
    n = m/5;
    an = a1*n;
    int s5 = sn(a1,an,n);
    a1 = 15;
    n = m/15;
    an = a1*n;
    int s15 = sn(a1,an,n);
    printf("%d",s3+s5-s15);
}