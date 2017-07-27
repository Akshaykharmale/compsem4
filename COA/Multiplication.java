		/*
		* TITLE		: BINARY MULTIPLICATION IN JAVA.
		* NAME		: KHARMALE AKSHAY KANS
		* ROLL NO	: 14co29
		* DATE		: 18 JAN 2016
		*/

		import java.util.*;
		public class Multiplication {
			public static void main(String[] args) //Main Function 
			{
				Scanner sc=new Scanner(System.in);
				System.out.println("enter the number 1");//To accept 1st no.
				int num1=sc.nextInt();
				String s1=Integer.toBinaryString(num1);	//For converting int to binary
				
				System.out.println("enter the number 2");//To accept 2nd no.
				int num2=sc.nextInt();
				String s2=Integer.toBinaryString(num2);	//For converting int to binary
				
				String result=mul(s1,s2);		//for calling multiplication function
				System.out.println("result in binary="+result);	//for displaying result
				
				int ansbin=Integer.parseInt(result,2);
				System.out.println("result in decimal="+ansbin);
				}
					
				private static String mul(String s1, String s2)//multiplication function
				{
						String z="";
						String result="";
						
						for(int i = s2.length()-1;i>=0;i--)
						{
							if(s2.charAt(i)=='1')
							{  
								result=add(result,s1+z);
							}
							z=z+"0";
						}
					return result;
				}
				static String[] Table={		//Table for comparision 
						"0+0+0=00",
						"0+0+1=01",
						"0+1+0=01",
						"0+1+1=10",
						"1+0+0=01",
						"1+0+1=10",
						"1+1+0=10",
						"1+1+1=11",
						};

					private static String add(String s1, String s2)//add function
					{
						int length=Math.max(s1.length(),s2.length());//for comparing length of strings
						s1=zeropadding(s1,length);		//for calling padding function
						s2=zeropadding(s2,length);
						
						String result="" ;
						char carry='0';
						
						for(int i=length-1;i>=0;i--)	//for look ahead carry
						{
							String colres=look(s1.charAt(i),s2.charAt(i),carry);//calling look function
							result=colres.charAt(1)+result;
							carry=colres.charAt(0);
						}
						if(carry=='1')		//condition for carry
						{
							result=carry+result;
						}
						return result;
					}

					private static String look(char b1, char b2, char c)//look function
					{
						String formula=String.format("%c+%c+%c=",b1,b2,c);//comparing with table
						for(String s:Table)
						{
							if(s.startsWith(formula))
							{
								//System.out.println("56451465");
								return(s.substring(s.indexOf("=")+1));//For returning substring from "="
							}
						}
						return null;
					}

					private static String zeropadding(String s, int length)//padding function
					{
						while(s.length()<length)
						{
							s='0'+s;		//concadinating zero to string
						}
						return s;
					}
		}
		/*
		OUTPUT :-
		enter the number 1 :
		5
		enter the number 2 :
		6
		result in binary = 11110
		result in decimal = 30
		*/
