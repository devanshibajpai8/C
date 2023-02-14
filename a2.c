#include <stdio.h>

void main()
 {
    int arr_1[10], arr_2[20], arr_3[30];
    int i,j=0,k=0,n;
       printf("enter value of n:");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("Elements are: ",i);
	      scanf("%d",&arr_1[i]);
	    }

    for(i=0;i<n;i++)
    {
	if (arr_1[i]%2 == 0)
	{
	   arr_2[j] = arr_1[i];
	   j++;                                      
	}
	else
	{
	   arr_3[k] = arr_1[i];
	   k++;
	}
    }

  printf("the elements are:");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr_2[i]);
    }

    
    for(i=0;i<k;i++)
    {
	printf("%d ", arr_3[i]);
    }
    printf("\n\n");	
 }