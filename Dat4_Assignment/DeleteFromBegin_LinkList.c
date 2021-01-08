#include<stdio.h>
#include<conio.h>
#include<malloc.h>
 
typedef struct nodetype
{ 
 int info;
 struct nodetype *next;
 
}node ;
 
void createlist(node **,int );
 
void deleteatbeg(node **);
 
void display(node *);
 
void main()
{
 node *start;
 int item,n,i;
 
 start=NULL;
 
 
	printf("Enter no. of nodes :\n");
 
	scanf("%d",&n);
 
	for(i= 0 ;i< n ;i++)
	{ 
    printf("Item for node %d :\n",i+1);
    scanf("%d",&item);
    
	createlist(&start,item) ;
    }
 
	printf("The list is :\n");
 
	display(start);
	 
	deleteatbeg(&start);
 
	printf("\nThe list after the deletion at first is :\n");
 
	display(start);
 }
 
void createlist(node **start,int item)
{ 
 
	node *ptr,*last;
 
	ptr =(node*)malloc(sizeof(node));
 
	ptr->info = item ;
 
	ptr->next = NULL;
 
	if(*start == NULL)
 
	*start = ptr ;
 
	else
 { 
 last = *start ;
 while(last->next !=NULL)
 {  
 last = last->next;
 }
 last->next = ptr ;
 
}
 
}
 
void deleteatbeg(node **start)
 
{
	node *ptr;
 
	int temp;
 
	ptr = *start ;
 
	temp = ptr->info;
 
	*start = ptr->next ;
 
	free(ptr);
 
	printf("\nDeleted item is %d : \n",temp);
 
}
 
void display(node *start)
 
{   int n = 0;
 
	while(start !=NULL)
 
    { 
 
		printf("\t %d",start->info);
 
		n++;
 
		start = start->next;
 
    }
 
     printf("\n Total number of nodes : %d",n);
 
}

