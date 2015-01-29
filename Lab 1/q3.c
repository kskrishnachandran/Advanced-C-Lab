/*File Name:q3.c
  Author:K.S.Krishna Chandran
  Description:To perform arithmetic operations on pointers variables.
  Date:29-01-15*/


#include<stdio.h>
int main()
{
	system("clear");
	printf("#Program to perform arithmetic operations on pointer variables#\n");
	int *a,*b;
	int c;
	a=(int*)malloc(1*4);
	b=(int*)malloc(1*4);
	char ch;
	int res;
	do
	{
		printf("\nMenu");
	    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modules\n");
	    printf("\nPlease enter a valid choice       ");
	    scanf("%d",&c);
		printf("\nEnter the first number   ");
	    scanf("%d",a);
	    printf("\nEnter the second number   ");
	    scanf("%d",b);
		switch(c)
		{
			case  1:
			printf("\nAddition\n");
			res=(*a)+(*b);
			printf("%d + %d = %d",(*a),(*b),res);
			break;
			
			case 2:
			printf("\nSubtraction\n");
			res=(*a)-(*b);
			printf("%d - %d = %d",(*a),(*b),res);
			break;
			
			case 3:
			printf("\nMultiplication\n");
			res=(*a)*(*b);
			printf("%d * %d = %d",(*a),(*b),res);
			break;
			
			case 4:
			printf("\nDivision\n");
			res=(*a)/(*b);
			printf("%d / %d = %d",(*a),(*b),res);
			break;
			
			case 5:
			printf("\nModules\n");
			res=(*a)%(*b);
			printf("%d / %d = %d",(*a),(*b),res);
			break;
			
			default:
			printf("\nPlease enter a valid option");
			break;
		}
		printf("\n\nDo you want to continue (Y/N)\n");
		scanf(" %c",&ch);
		system("clear");
	}while((ch=='Y')||(ch=='y'));
	printf("\n\n");
	return 0;
}			
