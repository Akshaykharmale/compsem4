#include<stdio.h>
# define MAX 10
int main()
{
	int w[MAX][MAX],c[MAX][MAX],r[MAX][MAX],p[MAX], q[MAX];
    int temp=0, root,min,min1,n;
    int i,j,k,b;
    
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("\n");
    
    for(i=1;i<=n;i++)
    {
		printf("enter the successful probabilities of %d:",i);
		scanf("%d",&p[i]);
	}
     printf("\n");
     for(i=0;i<=n;i++)
     {
		 printf("Enter the unsuccessful probabilities of %d:",i);
		 scanf("%d",&q[i]);
	 }
	
	printf("W\t\tC\t\tR\t\n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==j)
			{
				w[i][j]=q[i];
				c[i][j]=0;
				r[i][j]=0;
				printf("W[%d][%d]: %d\tC[%d][%d]: %d\tR[%d][%d]: %d\n",i,j,w[i][j],i,j,c[i][j],i,j,r[i][j]); 
				
		     }
		}	
	}
    printf("\n");
    for(b=0;b<=n;b++)
    {
		for(i=0,j=b+1; j<n+1&& i<n+1; j++,i++)
		{
			if(i!=j && i<j)
              {   
				 w[i][j]=p[j]+q[j]+w[i][j-1] ;
		         min=2000;
		         
		         for(k=i+1; k<=j;k++)
		         {
					min1=c[i][k-1]+c[k][j]+w[i][j];
					if(min>min1)
					{
						min=min1;
						temp=k;
					}
				}
				c[i][j]=min;
				r[i][j]=temp;
			}
			printf("W[%d][%d]: %d\tC[%d][%d]: %d\tR[%d][%d]: %d \n",i,j,w[i][j],i,j,c[i][j],i,j,r[i][j]);
		}
		printf("\n");
	}
		printf("Minimum cost=%d\n",c[0][n]);
		root=r[0][n];
		printf("root=%d\n",root);
		return 0;
} 
/*  
OUTPUT :
Enter the no of elements:4

enter the successful probabilities of 1:3
enter the successful probabilities of 2:3
enter the successful probabilities of 3:1
enter the successful probabilities of 4:1

Enter the unsuccessful probabilities of 0:2
Enter the unsuccessful probabilities of 1:3
Enter the unsuccessful probabilities of 2:1
Enter the unsuccessful probabilities of 3:1 
Enter the unsuccessful probabilities of 4:1
W		C		R	
W[0][0]: 2	C[0][0]: 0	R[0][0]: 0
W[1][1]: 3	C[1][1]: 0	R[1][1]: 0
W[2][2]: 1	C[2][2]: 0	R[2][2]: 0
W[3][3]: 1	C[3][3]: 0	R[3][3]: 0
W[4][4]: 1	C[4][4]: 0	R[4][4]: 0

W[0][1]: 8	C[0][1]: 8	R[0][1]: 1 
W[1][2]: 7	C[1][2]: 7	R[1][2]: 2 
W[2][3]: 3	C[2][3]: 3	R[2][3]: 3 
W[3][4]: 3	C[3][4]: 3	R[3][4]: 4 

W[0][2]: 12	C[0][2]: 19	R[0][2]: 1 
W[1][3]: 9	C[1][3]: 12	R[1][3]: 2 
W[2][4]: 5	C[2][4]: 8	R[2][4]: 3 

W[0][3]: 14	C[0][3]: 25	R[0][3]: 2 
W[1][4]: 11	C[1][4]: 19	R[1][4]: 2 

W[0][4]: 16	C[0][4]: 32	R[0][4]: 2 


Minimum cost=32
root=2
*/
