/*File Name:q2.c
  Author:K.S.Krishna Chandran
  Description:To display the contents of an array using pointers.
  Date:29-01-15*/
  
  
  #include<stdio.h>
  int main()
  {
	  system("clear");
	  printf("#Proram to display the contents of an array#\n");
	  int n;
	  printf("\nEnter the size for the array   ");
	  scanf("%d",&n);
	  int arr[n],i;
	  printf("\nEnter the array elements\n");
	  for(i=0;i<n;i++)
	  {
		  scanf("%d",(arr+i));
	  }
	  int *p=arr;
	  printf("\n\n\nPrinting the array elements using pointer.... \n");
	  for(i=0;i<n;i++)
	  {
		  printf("%d\t",*(p+i));
	  }
	  printf("\n\n");
	  return 0;
  }
