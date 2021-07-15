#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N+1];
    arr[0]=arr[1]=0;
    for(int i=2;i<=N;i++)
    {
        arr[i] = 1;
    }
    for(int i=2;i*i<=N;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<=N;i++)
    {
        if(arr[i]==1)
        {
            printf("%d ",i);
        }
    }
}