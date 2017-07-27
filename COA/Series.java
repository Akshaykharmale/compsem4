import java.util.*;
public class Series {
	public static void main(String args[])
	{
	
		float n,fact=1,sum=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter n = ");
		n=sc.nextInt();
		for(int i=1;i<=n;i++)
		{
			fact=fact*i;
			sum=sum+(1/fact);
		}
		System.out.println("sum of series = "+sum);
	}

}
