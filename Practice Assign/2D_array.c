#include<stdio.h>
void main()
{
int stud[3][4]= {{1,2,3,4},
{5,6,7,8},
{9,0,1,6}
};
printf("\n\n");
printf("Address of Array stud is %u\t\n", stud);
printf("\n\n");

printf("Address of zeroth element Array stud is %u\t\n", *(stud+0));
printf("Address of zeroth element Array stud is %u\t\n", stud[0]);
printf("\n\n");

printf("Address of first element Array stud is %u\t\n", *(stud+1));
printf("Address of first element Array stud is %u\t\n", stud[1]);
printf("\n\n");


printf("Address of second element Array stud is %u\t\n", *(stud+2));
printf("Address of second element Array stud is %u\t\n", stud[2]);


//print first row

printf("\n\n");

printf("%d\n",*(*(stud+0)+0));
printf("%d\n",*(*(stud+0)+1));
printf("%d\n",*(*(stud+0)+2));
printf("%d\n",*(*(stud+0)+3));

//another method to print first row
printf("\n\n");

printf("%d\n",*(stud[0])+0);
printf("%d\n",*(stud[0]+1));
printf("%d\n",*(stud[0]+2));
printf("%d\n",*(stud[0]+3));

//another method to print first row
int *j=stud;
printf("\n\n");

printf("%d\n",*j);
printf("%d\n",*(j+1));
printf("%d\n",*(j+2));
printf("%d\n",*(j+3));


}
