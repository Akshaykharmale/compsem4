import java.io.IOException;
import java.io.PrintStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.*;

public class Server {

	public static void main(String[] args) throws IOException {
		
		ServerSocket ss = new ServerSocket(5055);
		
		Socket s=ss.accept();
		
		Scanner sc = new Scanner(s.getInputStream());
		
		int b=sc.nextInt();
		
		int result=b*b;
		
		PrintStream ps = new PrintStream(s.getOutputStream());
		
		ps.println(result);
	}
}
