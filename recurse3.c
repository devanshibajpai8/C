#include<stdio.h>   
  
int main()  
{  
    int N; 
    printf("enter value of N:");
    scanf("%d",&N);
    int a[N], i, *ptr;   
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    ptr = &a[N - 1];  
  
    printf("\nElements of array in reverse order ...\n");  
    for(i = 0; i < N; i++)  
        printf("%d\n", *ptr--);  
  
    return 0;  
}  