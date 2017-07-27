import java.util.*;
class BinaryAddition 
{
	static String []table={
			"0+0+0=00",
			"0+0+1=01",
			"0+1+0=01",
			"0+1+1=10",
			"1+0+0=01",
			"1+0+1=10",
			"1+1+0=10",
			"1+1+1=11"
			};
	public static void main(String []args)
	{
		Scanner sc=new Scanner (System.in);
		System.out.println("Enter the num1 = ");
		int num1=sc.nextInt();
		String s1=Integer.toBinaryString(num1);
		System.out.println("Binary equivalent is = "+s1);
		
		System.out.println("Enter the num2 = ");
		int num2=sc.nextInt();
		String s2=Integer.toBinaryString(num2);
		System.out.println("Binary equivalent is = "+s2);
		
		String ans=add(s1,s2);
		System.out.println("Addition of binary nos = "+ans);
		
	}
	
	private static String add(String s1,String s2)
	{
		String result="";
		char carry='0';
		int length=Math.max(s1.length(),s2.length());
		
		s1=zeropadd(s1,length);
		s2=zeropadd(s2,length);
		
		for(int i=length-1;i>=0;i--)
		{
			String colres=look(s1.charAt(i),s2.charAt(i),carry);
			carry=colres.charAt(0);
			result=colres.charAt(1)+result;
		}
		if(carry=='1')
		{
			result=carry+result;
		}
		
		return result;
		
	}

	private static String look(char s1, char s2, char c) 
	{
		String formula=String.format("%c+%c+%c=",s1,s2,c);
		for(String s:table)
		{
			if(s.startsWith(formula))
				return (s.substring(s.indexOf("=")+1));
		}
		return null;
	}

	private static String zeropadd(String s, int length)
	{
		while(s.length()<length)
		{
			s="0"+s;
		}
		return s;
	}
}
