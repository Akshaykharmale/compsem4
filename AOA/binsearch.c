		/*
		Title         :- BINARY SEARCH								
		Discription   :- To IMPLEMENT BINARY SEARCH	USING D&C TECHNIQUE
		Student Name  :- KHARMALE AKSHAY KANS
		Roll No.      :- 14co29 
		Date Of Perf. :- 22/01/2016
		*/ 
			#include<stdio.h>
			int binsearch(int a[],int key,int low,int high)
			{	
				int m;
				if(low<=high)
				{
					m=(low+high)/2;	 //For finding mid of array
					if(key==a[m])	//For comparing mid element with key
						return m;
					else if(key<a[m])	//For key is at LHS of mid
						return binsearch(a,key,low,m-1);	
					else   				//For key is at RHS of mid 
						return binsearch(a,key,m+1,high);
				}
				else
					return -1;
			}
			int main()
			{
				int a[10],n,key,i,low,high,result=0;	//Variable Declaration
				
				prin
				
				
				
				
				
				
				
				
				tf("Enter the number of elements = ");
				scanf("%d",&n);
				
				printf("Enter the elements = \n");		//For accepting array
				for(i=0;i<n;i++)
				{
					scanf("%d",&a[i]);
				}
				
				printf("Enter number to be searched = ");//For accepting key element
				scanf("%d",&key);
				
				low=0;
				high=n-1;
				result=binsearch(a,key,low,high);//For calling binary search function
				
				if(result==-1)						//For comparing result
					printf("Element not found");
				else
					printf("Elemnt found at position = %d",result);	
					//For displaying key element positon
				return 0;
			}
			/*
			OUTPUT :
			Enter the number of elements = 5
				Enter the elements = 10	20	30	40	50
			Enter number to be searched = 30
				Elemnt found at position = 2
			Enter number to be searched = 60
				Element not found
			*/
