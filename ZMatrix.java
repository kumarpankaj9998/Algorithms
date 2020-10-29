import java.util.*;
public class Z
{
    public static void main(String  args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[][]=new int[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<n-1;i++)
        System.out.print(a[0][i]+" ");
        for(int i=0;i<n;i++)
        System.out.print(a[i][n-1-i]+" ");
        for(int i=1;i<n;i++)
        System.out.print(a[n-1][i]+" ");
    }
}
