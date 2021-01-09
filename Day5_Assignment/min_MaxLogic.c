#include<stdio.h>
void minMax(int stack[],int n);
int main()
{
	int stack[100],n,i;
	printf("Enter the Number of elements:");
	scanf("%d",&n);
	
	printf("Enter the %d Elements:",n);
	for(i=0;i<n;i++)
	 scanf("%d",&stack[i]);
	
    minMax(stack,n);
	return 0;
}
void minMax(int stack[100],int n)
{
    int i;
	int min,max; 
	min=max=stack[0];
	for(i=1;i<n;i++)
	{
		if(min>stack[i])
		{
			min=stack[i];
		}
		if(max<stack[i])
		{
			max=stack[i];
		}
	}
	printf("The max element is %d and min element is %d ",max,min);
}

