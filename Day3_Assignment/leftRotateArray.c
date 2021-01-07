#include <stdio.h>  
   
int main()  
{  
    //Initialize array   
  int num,n;
    //Calculate length of array arr  
    printf("Enter the number of element you want to enter:");
    scanf("%d",&num);
    int arr[num];
    printf("Enter %d eelement:",num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    int length = sizeof(arr)/sizeof(arr[0]);  
    
    printf("\nEnter the rotation value:");
    scanf("%d",&n);
      
    //Displays original array  
    printf("Original array: \n");  
    for (int i = 0; i < length; i++) {   
        printf("%d ", arr[i]);   
    }    
      
    //Rotate the given array by n times toward left  
    for(int i = 0; i < n; i++){  
        int j, first;  
        //Stores the first element of the array  
        first = arr[0];  
      
        for(j = 0; j < length-1; j++){  
            //Shift element of array by one  
            arr[j] = arr[j+1];  
        }  
        //First element of array will be added to the end  
        arr[j] = first;  
    }  
      
    printf("\n");  
      
    //Displays resulting array after rotation  
    printf("Array after left rotation: \n");  
    for(int i = 0; i < length; i++){  
        printf("%d ", arr[i]);  
    }  
    return 0;  
}  
