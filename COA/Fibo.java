import java.util.*;
public class Fibo {
	public static void main(String args[])
	{
	int n,a=0,b=1;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter a number = ");
	n=sc.nextInt();
	System.out.println(a);
	System.out.println(b);
	fib(n,a,b);
}
	public static int fib(int n,int a,int b)
	{
		int c=0;
		if(c==n)
			return n;
		else{
			c=a+b;
			System.out.println(c);
		}
		return fib(n-1,b,c);
	}
}

