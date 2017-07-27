/*
TITLE		:- LONGEST COMMON SUB-SEQUENCE
DISCRIPTION	:-TO IMPLEMENT LCS FOR STRING MATHING
NAME		:-KHARMALE AKSHAY KANS
ROLL NO		:-14CO29
DATE OF PERF:-01/04/2016
		*/

#include<stdio.h>
#include<string.h>
int max(int a,int b);
int lcs(char *X,char *Y,int m,int n)	//lcs function
{
	int i,j;			//variable declaration
	int L[m+1][n+1];
	for(i=0;i<=m;i++)	//for matrix row
	{
		for(j=0;j<=n;j++)	//for matrix coloumn
		{
			if(X==0 || Y==0)	//for making 1st row and 1st column 0
				L[i][j]=0;
			
			else if(X[i-1]==Y[j-1])		//condition for equal characters
				L[i][j]=L[i-1][j-1]+1;
			
			else 						//condition for equal characters
				L[i][j]=max(L[i][j-1],L[i-1][j]);	//calling max function
		}
	}
	return L[m][n];		//total length of string
}

int max(int a,int b)	//max function
{
	return (a>b)?a:b;
}
	
int main()				//main function
{
	char X[50],Y[50];	//variable declaration
	printf("Enter the first string : ");	//accepting first string
	scanf("%s",X);
	printf("Enter the second string : ");	//accepting second string
	scanf("%s",Y);
	
	int m =strlen(X);	//calculatig length of first string
	int n=strlen(Y);	//calculatig length of first string
	printf("Length of total string is : %d",lcs(X,Y,m,n));	//calling lcs function
	return 0;
}
 
/*
OUTPUT :
Enter the first string : BDCABA
Enter the SECOND string : ABCBDAB

Length of tital string is : 4
*/
