import java.util.Scanner;
public class BestFit {
	public static void main(String args[])
	{	
		 Scanner sc=new Scanner(System.in);
		  System.out.println("Enter the number of blocks:");
		  int n=sc.nextInt();
	      
		  int a[]=new int[n];
		  int b[]=new int[n];
		  
	      for(int i=0;i<n;i++)
	      {
	    	  System.out.println("Enter the size of memory "+(i+1)+":");
	    	  a[i]=sc.nextInt();
	      }
	      System.out.println("Enter the size of job : ");
	      int j=sc.nextInt();
	      
	      System.out.println("Before Allocation");
	      System.out.println("Memory \t Size");
	      for(int i=0;i<n;i++)
	      {
	    	  System.out.println("Memory"+(i+1)+"\t"+a[i]);
	      }
	      
	      for(int i=0;i<n;i++)
	      {
	    	  b[i]=a[i];
	      }
	      
	      for(int i=0;i<n;i++)
	      {
	    	  if(a[i]>=j)
	    	  {
	    		  a[i]=a[i]-j;
	    	  }
	      }
	      
	      int smallest=a[0];
	      int z=0;
	      for(int i=0;i<n;i++)
	      {
	    	  if(a[i]<smallest)
	    	  {
	    		  smallest=a[i];
	    		  z=i;				
	    	  }
	      }
	      int i;
	      System.out.println("\n After Allocation \n MEMORY \t SIZE");
	      
	      for(i=0;i<n;i++)
	      {
	    	  if(i==z)
	    		  System.out.println("Memory"+(i+1)+":"+"\t"+a[i]);
	    	  else
	    		  System.out.println("Memory"+(i+1)+":"+"\t"+b[i]);
	      }
	}
}
/*
OUTPUT:
Enter the number of blocks:
3
Enter the size of memory 1:
100
Enter the size of memory 2:
300
Enter the size of memory 3:
200
Enter the size of job : 
200

Before Allocation
Memory		 Size
Memory1		100
Memory2		300
Memory3		200

 After Allocation 
 MEMORY 	 SIZE
Memory1:	100
Memory2:	300
Memory3:	0
*/
