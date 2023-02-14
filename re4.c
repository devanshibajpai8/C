#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);

    int *p=(int*)malloc(n*sizeof(int));
    
    printf("enter the integers:\n");
    for(i=0;i<n;i++)
    {
        
        scanf("%d",(p+i));
    }
    
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",*(p+i));

    return 0;




}