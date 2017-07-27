			/*
			Title         :- QUICK SORT									
			Discription   :- To sort array in ascending order using QUICK SORT	
			Name  		  :- KHARMALE AKSHAY
			Roll No.      :- 14CO29
			Date Of Perf. :- 12/02/2016
			*/ 
			#include<stdio.h>
			void quicksort(int a[],int l, int h);
			int partition(int a[],int l,int h);
			void swap(int a[],int *i,int *j);

			int main()
			{
				int a[10],i,n;
				printf("Enter the no of Elements: ");
				scanf("%d",&n);
				printf("Enter Elements: \n");
				for(i=0;i<n;i++)							//for accepting elements
				{
					scanf("%d",&a[i]);
				}
				int l=0;									//low set to first element
				int h=n-1;									//high set to last element
				quicksort(a,l,h);					
				for(i=0;i<n;i++)							//printing sorted array
				printf(" %d ",a[i]);
				return 0;
			}

			void quicksort(int a[],int l, int h)
			{
				if(l<h)
				{
					int m;
					m=partition(a,l,h);						//partioning the array
					quicksort(a,l,m-1);						//sorting left sub-array
					quicksort(a,m+1,h);						//sorting right sub-array
				}
			}

			int partition(int a[],int l,int h)	//calling partitionfunction
			{
				int pivot,i=l,j=h;		//setting pivot element
				pivot=a[i];
				while(i<j)
				{
					while(a[i]<=pivot)//traversing i from left to right until greater element
					i++;
					
					while(a[j]>pivot)//traversing j from right to left until greater element
					j--;
					
					if(i<j)
					{
						swap(a,&i,&j);	//swap element if i<j
					}
				}
				
				swap(a,&l,&j);		//swap elements if j<i
				return j;
			}
			
			void swap(int a[],int *i,int *j)	//swap function
			{
				int temp;
				temp=a[*i];
				a[*i]=a[*j];
				a[*j]=temp;
			}
			
			/*
			OUTPUT :
			* Enter the no of Elements: 5
			Enter Elements: 
			25
			8
			89
			564
			54

			SORTED ARRAY IS
			 8  25  54  89  564 

			*/					
