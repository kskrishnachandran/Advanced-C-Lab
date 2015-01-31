/*File name:insert_to_list.c
  Author:K.S.Krishna Chandran
  Description:Program to insert elements at the end and beginig of a linked list.
  Date:31-01-15*/
  
 
#include<stdio.h>

struct node
{
	int no;
	struct node *link;
}*head=NULL;


void insert_at_head(int);
void insert_at_tail(int);
void display();
void modify();

int main()
{
	system("clear");
	int c,num;
	char ch;
	do
	{
		system("clear");
		printf("\n\nLinked List Menu\n");
		printf("\n1.Insert at head");
		printf("\n2.Insert at tail\n");
		printf("\n\nChoose an option     ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			printf("\nInsert at head\n");
			printf("\n\nEnter the number    ");
			scanf("%d",&num); 
			insert_at_head(num);
			display();
			break;

			case 2:
			printf("\nInsert at tail\n");
			printf("\n\nEnter the number    ");
			scanf("%d",&num); 
			insert_at_tail(num);
			display();
			break;
			
			default :
			printf("\nPlease enter a valid option ");
			break;
		}
		printf("\n\nDo you want to enter more numbers (Y/N)  ");
		scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n\n");
	return 0;
		
}

void insert_at_head(n)
{
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	new->no=n;
	new->link=NULL;
	if(head=NULL)
	{
		head=new;
	}
	else
	{
		new->link=head;
		head=new;
	}
}

void insert_at_tail(j)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	//temp=head;
	while(head->link!=NULL)
	{
		head=head->link;
	}
	temp->link=head;
	temp->no=j;
}	

void display()
{
	
	struct node *disp;
	disp=head;
	printf("\n\n\nThe numbers in the list are\n\n");
	while(disp!=NULL)
	{
		printf("%d ---> ",disp->no);
		disp=disp->link;
	}
	printf("NULL");
}
		
