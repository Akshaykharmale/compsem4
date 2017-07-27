		/*
		 Title         :- INSERTION SORT									
		 Discription   :- To sort array in ascending order using INSERTION SORT	
		 Student Name  :- KHARMALE AKSHAY KANS
		 Roll No.      :- 14co29 
		 Date Of Perf. :- 08/01/2016
		*/ 

			#include<stdio.h>
			int main()
			{
				int i,j,key,a[10],n;						//Variabe Diclaration
				printf("enter the number of elements to be sorted : ");
				scanf("%d",&n);
				printf("Enter the elements of array : \n");
				for(i=0;i<n;i++)
				{
					scanf("%d",&a[i]);						//Accepting Input
				}
				for(i=1;i<n;i++)
				{
					key=a[i];								//For selecting key 
					j=i-1;
					while(key<a[j]&&j>=0)							
					{
						a[j+1]=a[j];						//For Shifting Of Elements
						j--;
					}
					a[j+1]=key;								//For shifting key element
				}
				printf("sorted elements by using Insertion Sort : \n");
				for(i=0;i<n;i++)
				{
					printf("%d \t",a[i]);					//For Displaying Output
				}
				return 0;
			}
			/*
			 
			OUTPUT :-
			  
			Enter the number of elements to be sorted : 6
			Enter the elements of array : 
			5
			1
			6
			4
			2 
			3
			sorted elements by using Insertion Sort : 
			1 	2 	3 	4 	5 	6 	
			------------------
			(program exited with code: 6)
			Press return to continue


			*/	
