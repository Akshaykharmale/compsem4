/*
TITLE	: TO IMPLEMENT MULTIPLICATION USING CLIENT AND SERVER
NAME	: kHARMALE AKSHAY KANS
ROLL NO	: 14CO29
*/

import java.io.IOException;
import java.io.PrintStream;
import java.net.Socket;
import java.net.UnknownHostException;

import java.util.*;
public class Client {

	
	public static void main(String[] args) throws UnknownHostException, IOException {
		Socket s = new Socket("127.0.0.1",5055);
		Scanner sc = new Scanner (System.in);
		
		System.out.println("ENTER A NUMBER\n");
		int a = sc.nextInt();
		
		PrintStream ps = new PrintStream(s.getOutputStream());
		ps.println(a);
		
		Scanner sc1 = new Scanner (s.getInputStream());
		int result=sc1.nextInt();
		System.out.println(result);
	}

}
/*
OUTPUT :
ENTER A NUMBER :
2
RESULT IS :
4
*/
