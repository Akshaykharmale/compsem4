/*
TITLE	: PROGRAM TO IMPLEMENT CLIENT AND SERVER CHATING
NAME	: kHARMALE AKSHAY KANS
ROLL NO	: 14CO29
*/

import java.io.IOException;
import java.io.PrintStream;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;

public class clientCHAT {

	public static void main(String[] args) throws UnknownHostException, IOException {
		// TODO Auto-generated method stub
		Socket s=new Socket("127.0.0.1",1887);
		Scanner sc1=new Scanner(s.getInputStream());
		
		PrintStream p=new PrintStream(s.getOutputStream());
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Please Start Chatting:");
		char[] a;
		
		while(true)
		{
			String s1=sc.nextLine();
			p.println(s1);
			if(s1.equals("bye"))
			{
				s.close();
				break;
			}
			String s2=sc1.nextLine();
			System.out.println(s2);
            if(s2.equals("bye"))
			{
				s.close();
				break;
			}
		}
	}
}
/*
OUTPUT:

Please Start Chatting:
HIII
YO
HOW ARE U
I AM FINE
BYEE

*/
