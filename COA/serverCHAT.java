/*
TITLE	: PROGRAM TO IMPLEMENT CLIENT AND SERVER CHATING
NAME	: kHARMALE AKSHAY KANS
ROLL NO	: 14CO29
*/

import java.io.IOException;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Scanner;

		
public class serverCHAT {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		System.out.println("Server is running");
		ServerSocket ss=new ServerSocket(1887);
		Socket s=ss.accept();
		
		Scanner sc=new Scanner(System.in);
		PrintStream p=new PrintStream(s.getOutputStream());
		Scanner sc1=new Scanner(s.getInputStream());
		
		while(true)
		{
			String s1=sc1.nextLine();
			System.out.println(s1);
            if(s1.equals("bye"))
			{
				s.close();
				break;
			}
			
			System.out.println("Type your reply");
			String s2=sc.nextLine();
			p.println(s2);
			
			if(s2.equals("bye"))
			{
				s.close();
				break;
			}
			
		}
	}
}
/*
OUTPUT :
Server is running
HIII

Type your reply
YO
HOW ARE U

Type your reply
I AM FINE
HOW ARE U

Type your reply
BYEE
*/
