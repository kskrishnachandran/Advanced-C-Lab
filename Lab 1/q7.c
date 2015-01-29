/*File Name:q7.c
  Author:K.S.Krishna Chandran
  Description:To read 2-d array and print it using pointers.
  Date:29-01-15*/


#include<stdio.h>
int main()
{
	system("clear");
	printf("#Program to read 2-d array and print it#\n");
	int m,n;
	printf("\nEnter the row and column size for the 2-d array\n");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	int i,j;
	printf("\n\nEnter the array elemenys   \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(*(arr+i)+j));
		}
	}
	printf("\n\n");
	printf("\nThe elements in the 2d array are\n");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d  ",*(*(arr+i)+j));
		}
	}
	printf("\n\n");
	return 0;
}
