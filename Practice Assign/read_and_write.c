/*File Name:read_and_write.c
Author:K.S.Krishna Chandran
Description:To read and write the array elements using pointers.
Date:15-10-15*/


#include<stdio.h>
int main()
{
	system("clear");
	int *p;
	int n;
	printf("Enter the size of the array  ");
	scanf("%d",&n);
	int arr[n];
	int i;
	printf("\nEnter the array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	p=arr;
	printf("\n\n\n\nUsing pointers printing the entered array elements \n\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*p);
		*p++;
	}
	printf("\n\n");
	return 0;
}
	
