/*File Name:Matrix_addition.c
Author:K.S.Krishna Chandran
Description:To perform addition of matrices using pointers.
Date:07\11\14*/



#include<stdio.h>
int main()
{
	int m,n,p,q;
	int i,j,k;
	int *p1,*p2;
	int choice;
	char ch;
	do
	{
		system("clear");
		printf("Enter the row and column size for matrix A\n");
		scanf("%d%d",&m,&n);
		int *(A)[4];
		A=(int*)malloc((n*m)*4); 
		printf("\nEnter the elements for matrix A\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",((A+j));
			}
			A+i;
		}
		printf("\nEnter the row and column size for matrix B\n");
		scanf("%d%d",&p,&q);
		int *B[];
		B=(int*)malloc((n*m)*4); 
		printf("\nEnter the elements for matrix B\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",((B+i)+j));
			}
		}
		system("clear");
		printf("\n\nMatrix A is \n");
		for(i=0;i<m;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
			{
				printf("%d  ",*((A+i)+j));
			}
		}     
		printf("\n\nMatrix B is \n");
		for(i=0;i<p;i++)
		{
			printf("\n");
			for(j=0;j<q;j++)
			{
				printf("%d  ",*((B+i)+j));
			}
		}
		int *C[];
		C=(int*)malloc((n*m)*4); 

		printf("\n\n");
		printf("\n");
		printf("\nAddition of two matrices\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
	         	{
				(*(C+i+j))=(*(A+i+j))+(*(B+i+j));
			}
		}
		printf("\nSum of matrices A and B is\n");
		for(i=0;i<m;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
			{
				printf("%d ",*(C+i+j));
			}
		}
		printf("\n\n");
		printf("\nDo you want to continue(Y/N)...      ");
		scanf(" %c",&ch); 
	}while(ch=='y'||ch=='Y');
	printf("\n\n");
	return 0;
} 
