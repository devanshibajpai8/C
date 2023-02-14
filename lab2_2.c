#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m=0,k=0,a1[n],a2[20],a3[30],t;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a1[i]%2 == 0)
        {
           a2[m]=a1[i];
           m++;
        }
        else
        {
            a3[k]=a1[i];
            k++;
        }
    }
     printf("the elements are:");
    for(int i=0;i<m;i++)
    {
	printf("%d ",a2[i]);
    }
    for(int i=0;i<k;i++)
    {
	printf("%d ", a3[i]);
    }
    printf("\n");	
}