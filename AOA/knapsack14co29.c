			/*
			Title         :- KNAPSACK PROBLEM									
			Discription   :- TO IMPLEMENT KNAPSACK PROBLEM USING GREEDY METHOD	
			Name  		  :- KHARMALE AKSHAY
			Roll No.      :- 14CO29
			Date Of Perf. :- 26/02/2016
			*/ 
			
		#include<stdio.h>
		
		void knapsack(int n,float weight[],float profit[],float capacity)//knapsack function
		{
			float x[20],tp=0; 				//variable declaration
			int i,u;
			u=capacity;
			
			for(i=0;i<n;i++)
			{
				if(weight[i]>u) 			//comparing weight & capacity
					break;
			
				else 						//taking whole weight
				{
					x[i]=1.0;				//taking whole ratio
					tp=tp+profit[i]; 		//calculating total profit
					u=u-weight[i];	 		//new knapsack capacity
				}
			}
			if(i<n)							//condition for fraction values
			x[i]=u/weight[i];				//calculation for fraction ratio
			
			tp=tp+(x[i]*profit[i]);			//total profit of knapsack
			
			printf("\n The result fraction is : ");	//displaying fraction
			
			for(i=0;i<n;i++)
			{
				printf("%f \t",x[i]);
			}
			
			printf("\n Maximum profit is : %f",tp);	//displaying the max profit of knapsack
		}
		
		int main()			//main function
		{
			float weight[20],profit[20],capacity;	//variable declaration
			int n,i,j;
			float ratio[10],temp;
			
			printf("Enter the no.of objects : ");	//accepting no.of objects
			scanf("%d",&n);
			
			printf("Enter the weight and profit of knapsack : ");	//accepting weights & profits of objects
			
			for(i=0;i<n;i++)
			{
				scanf("%f %f",&weight[i],&profit[i]);
			}
			
			printf("Enter the capacity of knapsack : ");	//accepting the capacity of knapsack
			scanf("%f",&capacity);
			
			for(i=0;i<n;i++)
			{
				ratio[i]=profit[i]/weight[i];	//calculating the ratio
			}
			
			for(i=0;i<n;i++)	//sorting the ratio,profit & weight in decreasing order
			{
				for(j=i+1;j<n;j++)
				{
					if(ratio[i]<ratio[j])	//condition for sorting
					{
						temp=ratio[j];		//sorting ratio
						ratio[j]=ratio[i];
						ratio[i]=temp;
						
						temp=weight[j];		//sorting weight
						weight[j]=weight[i];
						weight[i]=temp;
						
						temp=profit[j];		//sorting profit
						profit[j]=profit[i];
						profit[i]=temp;
					}
				}
			}
			knapsack(n,weight,profit,capacity);		//calling knapsack function
			return 0;
		}
		/* 
		  OUTPUT :
		Enter the no.of objects : 3
		Enter the weight and profit of knapsack :
		18 25
		15 24
		10 15
		Enter the capacity of knapsack : 20

		 The result fraction is : 1.000000 	0.500000 	0.000000 	
		 Maximum profit is : 31.500000
		*/
