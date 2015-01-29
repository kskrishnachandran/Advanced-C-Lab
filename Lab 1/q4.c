/*File Name:q4.c
  Author:K.S.Krishna Chandran
  Description:To reverse an array using pointers.
  Date:29-01-15*/
  
  
#include<stdio.h>
int main()
{
	system("clear");
	printf("#Program to reverse an array#\n");
	int n=6;
	int *p;
	int i;
	p=(int*)malloc(n*4);
	printf("\nEnter six elements to the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("\n\nThe array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",(*(p+i)));
	}
	int j;
	printf("\n\n");
	printf("\n\nPrinting the array in reverse order...");
	printf("\n\n");
	for(j=i-1;j>=0;j--)
	{
		printf("%d\t",(*(p+j)));
	}
	printf("\n\n");
	return 0;
}
