/*File Name:Matrix_addition.c
Author:K.S.Krishna Chandran
Description:To perform addition of matrices using pointers.
Date:07\11\14*/



#include<stdio.h>
int main()
{
	int m,n,p,q;
	int i,j,k;
	int choice;
	char ch;
	do
	{
		system("clear");
		printf("Enter the row and column size for matrix A\n");
		scanf("%d%d",&m,&n);
		int sA=m*n;
		int A[m][n];
		printf("\nEnter the elements for matrix A\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		int *pa;
	    pa=(int*)malloc(sA*4); 
	    pa=A;
		printf("\nEnter the row and column size for matrix B\n");
		scanf("%d%d",&p,&q);
		int sB=p*q;
		int B[p][q];
		printf("\nEnter the elements for matrix B\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&B[i][j]);
			}
		}
		int *pb;
		pb=(int*)malloc(sB*4); 
		pb=B;
		system("clear");
		printf("\n\nMatrix A is \n");
		for(i=0;i<m;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
			{
				printf("%d  ",A[i][j]);
			}
		}     
		printf("\n\nMatrix B is \n");
		for(i=0;i<p;i++)
		{
			printf("\n");
			for(j=0;j<q;j++)
			{
				printf("%d  ",B[i][j]);
			}
		}
		int C[m][n];
		printf("\n\n");
		printf("\nAddition of two matrices\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				C[i][j]=A[i][j]+B[i][j];
			}
		}
		printf("\nSum of matrices A and B is\n");
		for(i=0;i<m;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
			{
				printf("%d ",C[i][j]);
			}
		}
		printf("\n\n");
		printf("\nDo you want to continue(Y/N)");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	printf("\n\n");
	return 0;
}

