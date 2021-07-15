#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int M = (N-1)/2;
    int arr[M+1];
    for(int i=0;i<=M;i++)
    {
        arr[i] = i;
    }
    int i=1,j=1;
    int a = i+j+2*i*j;
    while(a<=M)
    {
        arr[a] = 0;
        j++;
        a = i+j+2*i*j;
        if(a>M)
        {
            i++;
            j=i;
            a = i+j+2*i*j;
        }
    }
    printf("2 ");
    for(int i=0;i<=M;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d ",arr[i]*2+1);
        }
    }
}