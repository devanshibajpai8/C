#include<stdio.h>
#include<stdlib.h>
void maxcount(int *arr,int size)
{
    int i, j, count;
    int most = 0;
    int temp, elem;

    for(i = 0; i < size; i++) {
        temp = arr[i];
        count = 1;
        for(j = i + 1; j < size; j++) {
            if(arr[j] == temp) {
                count++;
            }
        }
        if (most < count) {
            most = count;
            elem = arr[i];
        }
    }
    printf("most repeated:%d",elem);
}
int main()
{
    int n;
    
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
            if(a[i+1]==a[i])
            {
                count++;
            }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nduplicate elements are:%d\n",count);
    maxcount(a,n);
}
