import java.util.*;
public class Sum {
	public static void main(String args[])
	{
		int n;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number = ");
		n=sc.nextInt();
		System.out.println("the sum is = "+sum(n,0));
	}
	public static int sum(int n,int sum)
	{
		int r;
		if(n==0)
			return sum;
		else
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
			
		}
		return sum(n,sum);
	}
}
			

