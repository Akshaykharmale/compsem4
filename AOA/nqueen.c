#include<stdio.h>
#include<math.h>

int board[20];
int count;
int main()
{
	int n;
	void queen(int row,int n);
	printf("\nProgram for queen's using backtracking");
	printf("Enter number of queen's : ");
	scanf("%d",&n);
	queen(1,n);
	return 0;
}

//This function is for printing the solution 
void print_board(int n)
{
	int i,j;
	printf("\n\n solution %d:\n\n",++count);
	//number of solution
	for(i=1;i<=n;i++)
	{
		printf("\t%d",i);
	}
	for(i=0;i<=n;i++)
	{
		printf("\n\n%d",i);
		for(j=1;j<=n;j++)	//for n*n board
		{
			if(board[i]==j)
			printf("\tQ");
			else
			printf("\t-");
		}
	}
	printf("\n Press any key to continue......");
}

int place(int row,int column)
{
	int i;
	for(i=1;i<=row;i++)
	{
		if(board[i]==column)
		return 0;
		else if(abs(board[i]-column)==abs(i-row))
		{
			return 0;
		}
	
	}
		return 0;
}

void queen(int row,int n)
{
	int column;
	for(column=1;column<=n;column++)
	{
		if(place(row,column))
		{
			board[row]=column;
			if(row==n)
			print_board(n);
			else
			queen(row+1,n);
		}
	}
}

		
