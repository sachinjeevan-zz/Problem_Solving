import java.util.*;
public class Fermat {
    public static void main(String[] args) {
            int N;
            Scanner sc = new Scanner(System.in);
            N = sc.nextInt();
            int arr[] = new int[N];
            int prime[] = new int[N];
            int g=0;
            arr[0] = N;
            int front=0,rear=1;
            while(front!=rear)
            {
            int s = arr[front];
            int a = (int)Math.ceil(Math.sqrt(s));
            while(true)
            {
                int b2 = a*a - s;
                int b = (int)Math.sqrt(b2);
                if(b*b==b2)
                {
                    if((a+b)==1 || (a-b)==1)
                    {
                        prime[g++] = s;
                        front++;
                        break;
                    }
                    arr[rear++] = a+b;
                    arr[rear++] = a-b;
                    front++;
                    break;
                }
                else
                {
                    a++;
                }
            }
        }
        for(int i=0;i<g;i++)
        {
            System.out.print(prime[i]+ " ");
        }
    }
}
