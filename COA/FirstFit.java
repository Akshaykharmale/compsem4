import java.util.Scanner;
public class FirstFit {
	public static void main(String args[]){
		  Scanner sc=new Scanner(System.in);
		  System.out.println("Enter the number of blocks:");
		  int n=sc.nextInt();
	      
		  int a[]=new int[n];
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
	      
	      for(int i=0;i<=n;i++)
	      {
	    	  if(a[i]>=j)
	    	  {
	    		  a[i]=a[i]-j;
	    		  break;
	    	  }
	      }
	      System.out.println("\nAfter Allocation \n Memory \t Size");
	      for(int i=0;i<n;i++)
	      {
	    	  System.out.println("Memory"+(i+1)+":"+"\t"+a[i]);
	    	  
	      }
	      
	}
}
/*
OUTPUT :

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
Memory 	 Size
Memory1	100
Memory2	300
Memory3	200

After Allocation 
 Memory 	 Size
Memory1:	100
Memory2:	100
Memory3:	200
*/
