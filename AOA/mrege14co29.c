			/*
			Title         :- MERGE SORT									
			Discription   :- To sort array in ascending order using MERGE SORT	
			Student Name  :- KHARMALE AKSHAY KANS
			Roll No.      :- 14co29 
			Date Of Perf. :- 12/02/2016
			*/ 
			
			#include<stdio.h>
			void combine(int a[],int low,int high,int mid)	//Combine function
			{
				int temp[20],i,j,k;
				i=k=low;
				j=mid+1;
				while(i<=mid && j<=high)
				{
					if(a[i]<a[j])
					{
						temp[k]=a[i];	//element from left sub-array
						i++;
						k++;
					}
					else
					{
						temp[k]=a[j];	//element from right sub-array
						j++;
						k++;
					}
				}
				while(i<=mid)	//CONDITION FOR ELEMENTS LESS THAN MID
				{
					temp[k]=a[i];//storing elements in temporary array
					i++;
					k++;
				}
				while(j<=high)//condition for elements less than high
				{
					temp[k]=a[j];//storing elements in temporary array
					i++;
					k++;
				}
				
				for(k=low;k<=high;k++)
				a[k]=temp[k];
				
			}

			void divide(int a[],int low,int high)	//divide function
			{
				int mid;
				if(low<high)
				{
					mid=(low+high)/2;	
					divide(a,low,mid);	//dividing left sub-array
					
					divide(a,mid+1,high);	//dividing right sub-array
					
					combine(a,low,high,mid);	//combining of both array
				}
			}

			void display(int a[],int high)	//display function
			{
				int i;
				
				for(i=0;i<=high;i++)	//for display sorted array
				{
				printf("%d\t",a[i]);
				}
			}
				
			int main()
			{
				int i,n,a[20];
				int low=0;
				
				printf("Enter the no.of elements = ");	//input of no. of elements
				scanf("%d",&n);
				
				int high=n-1;
				printf("Enter elements = \n");
				
				for(i=0;i<n;i++)					//accepting elements to array
				{
					scanf("%d",&a[i]);
				}
				
				divide(a,low,high);		//calling divide function
				
				display(a,n-1);		//calling display function
				return 0;
			}
			
			/*
			OUTPUT :
			Enter the no.of elements = 5
			Enter elements = 
			9
			1
			5 
			8
			2
			SORTED ELEMENTS ARE

			1	2	5	8	9	
			*/
