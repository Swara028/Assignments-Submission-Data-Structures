#include <stdio.h>
 
 
 print(int a[],int n)
 { 
    int i;
    for(i=0; i<n; i++)
    {
         
        printf("%d ",a[i]);
         
    }
 	
 }
int main()
{
    int a[10000],i,n,index=1,new1;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    if(index<=n && index>0)
    {
     printf("\nbefore deletion  :");
     print(a,n);
 
        for(i=index-1; i<n-1; i++)
        {
         a[i]=a[i+1];
           
        }
    printf("\nafter   deletion :");
        
		print(a,n-1);
    }
    else
            printf("\ninvalid input");
 
    return 0;
} 
