#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n],i,*p;
    for( i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=&a[n-1];
    }
    printf("reverse order:\n");
    for(i=0;i<n;i++)
      printf("%d\n",*p--);

      return 0;


}