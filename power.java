import java.util.*;
public class power {
    public static int exponent(int x,int y)
    {
        if(y>1)
        {
            if(y%2==0) return exponent(x*x, y/2);
            else return x*exponent(x,y-1);
        }
        else
        {
            return x;
        }
    }
    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int x = sc.nextInt();
            int y = sc.nextInt();
            System.out.println(exponent(x,y));
    }
}
