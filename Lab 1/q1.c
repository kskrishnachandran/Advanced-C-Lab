/*File Name:q1.c
  Author:K.S.Krishna Chandran
  Description:To replace the array elements with zero using pointers.
  Date:29-01-15*/


#include<stdio.h>
int main()
{
	system("clear");
	printf("#Prigram to replace the array elements with zero#\n");
	int n;
	printf("\nEnter the array size     ");
	scanf("%d",&n);
	int i;
	int *p;
	p=(int*)malloc(n*4);                        //Dynamic allocation of memory space of n number of elements for the pointer
	printf("\nEnter the array elements  \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));                     //Base memory address + i
 	}
	printf("\n\nThe array elemetns are....\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	for(i=0;i<n;i++)
	{
		*(p+i)=0;
	}
	printf("\n\n");
	printf("\n\nThe array elemetns after replacing with zero\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	printf("\n\n");
	return 0;
}
