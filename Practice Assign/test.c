
#include<stdio.h>
void main()
{
	int a[3][4]= {{1,2,3,4},
		{5,6,7,8},
		{9,0,1,6}
	};
	int i;
	int *j=a;
	for(i=0;i<3;i++)
	{
		printf("test1 %d\t", *(*(a+i)));
		printf("test2 %u\t",*(j+i));
	}

	printf("\n");
	printf("\n");
	swap(a,3,4);
	printf("\n");
	swap1(a,3,4);
	printf("\n");
	swap2(a,3,4);
	printf("\nSwap3");
	swap3(a,3,4);
}

void swap(int *a,int r, int c)
{
	int i;
	int j;
	for(i=0;i<12;i++)
		printf("%d\t", *(a++));
}

void swap1(int *a,int r, int c)
{
	int i;
	int j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			printf("%d\t", *(a+i*c+j));
		printf("\n");
	}
}
void swap3(int a[][4],int r, int c)
{
	int i; 
	int j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

void swap2(int (*a)[4],int r, int c)
{
	int i=0;
	int j;
	int *p;

	for(i=0;i<r;i++)
	{
		p=a+i;
		for(j=0;j<c;j++)
		{
			printf("\n%d\t", *(p+j));
			printf("%u",(p+j));}
		printf("\n");
	}
}


