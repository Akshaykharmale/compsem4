import java.util.Scanner;


public class FIFO {
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the frame size : ");
		int f=sc.nextInt();
		int fifo[]=new int[f];
		
		System.out.println("Enter the no.of inputs : ");
		int n=sc.nextInt();
		int inp[]= new int [n];
		System.out.println("Enter the inputs : ");
		for(int i=0;i<n;i++)
		{
			inp[i]=sc.nextInt();
		}
		  for(int i=0;i<f;i++)
		  {
			 fifo[i]=-1;
		  }
		  
      int Hit=0;
      int Fault=0;
      int k=0;
      boolean z;
      
      for(int i=0;i<n;i++)
      {
    	  z=false;
    	  
    	  for(int j=0;j<f;j++)
    		  if(fifo[j]==inp[i])
    		  {
    			  z=true;
    			  Hit=Hit+1;
    		  }
    	  	  if(z==false)
    	  	  {
    	  		fifo[k]=inp[i];
    	  		k++;
    	  		if(k>=f)
    	  			k=0;
    	  		Fault=Fault+1;
    	  	  }
      }
    	  	System.out.println("Hit : "+Hit);
    	  	System.out.println("Fault : "+(Fault-f));

	}
}
/*
OUTPUT :
Enter the frame size : 3
Enter the no.of inputs : 9

Enter the inputs : 
2 3 2 1 5 2 4 5 3

Hit : 2
Fault : 4
*/