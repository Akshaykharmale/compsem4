		/*
		Title         :- PRIM'S ALGORITHM									
		Discription   :- To IMPLEMENT PRIM'S ALGORITHM USIN GREEDY METHOD	
		Name  		  :- KHARMALE AKSHAY
		Roll No.      :- 14CO29
		Date Of Perf. :- 23/03/2016
		*/ 
		#include<stdio.h>
		int n,cost[10][10];
		void prim()
		{
			int i,j,startvertex,endvertex;
			int k,nr[10],temp,minimumcost=0,tree[10][3];
			
			//For first smallest edge
			temp=cost[0][0];
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(temp>cost[i][j])
					{
						temp=cost[i][j];
						startvertex=i;
						endvertex=j;
					}
				}
			}
			
			//now we have first smallest edge in graph
			tree[0][0]=startvertex;
			tree[0][1]=endvertex;
			tree[0][2]=temp;
			minimumcost=temp;
			
			//now we have to find min distance of each vertex from either startvertex or endvertex by initializing nr[] array
			for(i=0;i<n;i++)
			{
				if(cost[i][startvertex]< cost[i][endvertex])
					nr[i]=startvertex;
				else
					nr[i]=endvertex;
			}
			
			//To indicate visited vertex initialize nr[] for then to 100
			nr[startvertex]=100;
			nr[endvertex]=100;
			
			//Now find out remaining n-2 edges
			temp=99;
			for(i=1;i<n-1;i++)
			{
				for(j=0;j<n;j++)
				{
					if(nr[j] != 100 && cost[j][nr[j]]< temp)
					{
						temp=cost[j][nr[j]];
						k=j;
					}
				}
				//now i have got next vertex
				tree[i][0]=k;
				tree[i][1]=nr[k];
				tree[i][2]=cost[k][nr[k]];
				minimumcost=minimumcost + cost[k][nr[k]];
				nr[k]=100;
				
				//Now find if k is nearest to any vertex than its previous near value
				for(j=0;j<n;j++)
				{
					if(nr[j] != 100 && cost[j][nr[j]]< cost[j][k])
					nr[j]=k;
				}
				temp=99;
			}
			//Now i have the answer 
			printf("\n The minimum spanning tree is :- ");
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<3;j++)
					printf("%d" , tree[i][j]);
				printf("\n");
			}
			
			printf("\n Min cost : %d",minimumcost);
		}

		int main()
		{
			int i,j;
			printf("\n Enter the no. of vertices : ");
			scanf("%d",&n);
			
			printf("\n Enter the cost of edges in matrix form : \n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",&cost[i][j]);
				}
			}
			printf("\n The matrix is : ");
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%d\t",cost[i][j]);
				}
				printf("\n");
			}
			prim();
			return 0;
		}
		/*
		OUTPUT :
		Enter the no. of vertices : 3

		 Enter the cost of edges in matrix form : 
		99 2 3 
		2 99 5
		3 5 99

		 The matrix is : 
		99	2	3	
		2	99	5	
		3	5	99	

		 The minimum spanning tree is :- 
		0	1	2
		2	0	3

		 Min cost : 5	
		*/
