#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int fn6=2,fn3=8,fn=34;
    int sum = 10;
    while(fn<=N)
    {
        sum+=fn;
        fn6 = fn3;
        fn3 = fn;
        fn = 4*fn3+fn6;
    }
    printf("%d",sum);
}