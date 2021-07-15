import java.util.*;
public class wheel {
    public static void main(String[] args) {
        int N,k=0;
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        int arr[] = new int[N];
        int num[] = new int[N];
        num[0]=2;
        num[1]=3;
        int m=1,s=2;
        int a = 6*m-1,b=6*m+1;
        while(a<=Math.sqrt(N))
        {
            num[s++] = a;
            num[s++] = b;
            m++;
            a = 6*m-1;
            b = 6*m+1;
        }
        for(int d=0;d<s;d++)
        {
            while(N%num[d]==0)
            {
                arr[k++] = num[d];
                N/=num[d];
            }
        }
        if(N>1)
        {
            arr[k++] = N;
        }
        for(int i=0;i<k;i++)
        {
            System.out.print(arr[i]+ " ");
        }
    }
}
