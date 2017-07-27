		/*
		Title         :- SELECTION SORT									
		Discription   :- To sort array in ascending order using SELECTION SORT	
		Student Name  :- KHARMALE AKSHAY KANS
		Roll No.      :- 14co29 
		Date Of Perf. :- 15/01/2016
		*/ 

			#include<stdio.h>
			int main()
			{
				int a[10],n,temp,min,i,j,k;			//Variable Decleration
				printf("Enter number of elements = ");
				scanf("%d",&n);

				printf("Enter Elements = \n");
				for(i=0;i<n;i++)			//Accepting elements in array
				{
					scanf("%d",&a[i]);
				}
				for(i=0;i<n;i++)			//For swapping elements
				{
					min=i;
					for(j=i+1;j<n;j++)		//For finding minimum element
					{
						if(a[j]<a[min])		//For comparing elements
						{
							min=j;
						}
					}
						temp=a[i];
						a[i]=a[min];
						a[min]=temp;
				}
					printf("\n Sorted array using selection sort : \n");
					for(k=0;k<n;k++)		//For printing sorted array
					{
						printf("%d\t",a[k]);
					}
					return 0;
			}
			/* 
			OUTPUT :-
			Enter number of elements = 6
			Enter Elements = 
			5
			1
			6
			2
			4
			3

			 Sorted array using selection sort : 
			1	2	3	4	5	6	

			------------------
			(program exited with code: 0)
			Press return to continue
			*/

