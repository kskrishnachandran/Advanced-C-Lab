/*File Name:copying_arrays.c
Author:K.S.Krishna Chandran
Description:To copy array elements to another array using pointers.
Date:15-10-15*/

#include<stdio.h>
int main()
{
	
	system("clear");
	int n;
	printf("Enter the size of the array  ");
	scanf("%d",&n);
	int i,arr[n];
	printf("\nEnter the array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	int *p,*copy;
    p=arr;
	printf("\n\n\nCopying the elements to another array using pointers.......... \n");
	copy=(int*)malloc(n*4); 
	*copy=*p;
	for(i=0;i<n;i++)
	{
		*(copy+i)=*(p+i);
		
	}
	printf("\n\nArray elements after copying to the new array.......\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(copy+i));
	} 
	printf("\n\n");
	return 0;
}
