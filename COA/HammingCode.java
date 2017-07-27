import java.util.Scanner;


public class HammingCode {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int d[]=new int [10];
		int h[]=new int [10];
		int p[]=new int [10];
		int i,z;
		System.out.println("ENTER THE FOUR BIT DATA\n");
		for(i=0;i<4;i++)
		{
			d[i]=sc.nextInt();
		}
		h[0]=d[0];
		h[1]=d[1];
		h[2]=d[2];
		h[3]=(h[0]+h[1]+h[2])%2;
		h[4]=d[3];
		h[5]=(h[4]+h[1]+h[0])%2;
		h[6]=(h[0]+h[2]+h[4])%2;
		System.out.println("HAMMING CODE IS");
		for(i=0;i<7;i++)
		{
			System.out.print(h[i]);
		}
		System.out.println("\nENTER THE HAMMING CODE WITH 1 BIT ERROR");
		for(i=0;i<7;i++)
		{
			h[i]=sc.nextInt();
		}
		p[0]=(h[0]+h[2]+h[4]+h[6])%2;
		p[1]=(h[0]+h[1]+h[4]+h[5])%2;
		p[2]=(h[0]+h[1]+h[2]+h[3])%2;
		z=7-(4*p[2]+2*p[1]+1*p[0]);
		if (z==7)
		{
			System.out.println("\nTHERE IS NO ERROR\n");
		}
		else
		{
			System.out.println("\nERROR IS AT POSITION   "+z);
			if (h[z]==0)
			{
				h[z]=1;
			}
			else
			{
				h[z]=0;
			}
		}
		System.out.println("\nCORRECTED HAMMING CODE IS\n");
		for(i=0;i<7;i++)
		{
			System.out.print(h[i]);
		}
	}	
}
/*
OUTPUT:-
ENTER THE FOUR BIT DATA
1
0
1
0
HAMMING CODE IS
1010010
ENTER THE HAMMING CODE WITH 1 BIT ERROR
1
0
1
1
0
1
0
ERROR IS AT POSITION   3

CORRECTED HAMMING CODE IS

1010010
*/