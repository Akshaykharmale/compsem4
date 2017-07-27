import java.util.*;
public class Fact {
	public static void main(String args[])
	{
		int n;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number = ");
		n=sc.nextInt();
		System.out.println("the factorial is = "+fact(n));
		
	}
	public static int fact(int n)
	{
		if(n==1)
			return 1;
		else
			return (fact(n-1)*n);
	}

}
