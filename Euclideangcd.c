#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    printf("%d",gcd(A,B));

}