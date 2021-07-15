#include<stdio.h>
#include<math.h>
int main()
{
    int M;
    scanf("%d",&M);
    int arr[M],front=0,rear=1;
    arr[0]=M;
    while (front!=rear)
    {
        int n = arr[front];
        int a = ceil(sqrt(n));

        while(1)
        {
            int b2 = a*a - n;
            int b = sqrt(b2);
            if(b*b==b2)
            {
                int f1=a+b,f2=a-b;
                if(f1==1)
                {
                    printf("%d ",f2);
            
                }
                else if(f2==1)
                {
                    printf("%d ",f1);
                    
                   
                }
                else
                {
                    arr[rear++] = f1;
                    arr[rear++] = f2;
                }
                front++;
                break;
            }
            else
            {
                a++;
            }
        }
       
    }
    
}