#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *a,int n)
{
    int min,i;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            min=a[j];
            a[j]=a[j+1];
            a[j+1]=min;
        } 
    }
    }
}
void selectionSort(int *a, int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            } 
        }
        int p;
                p=a[i];
                a[i]=a[min];
                a[min]=p;
                
    }
}
void insertionsort(int *a,int n)
{
    int i,j,min,p;
    for(i=1;i<n;i++)
    {
        p=a[i];
        j=i-1;
            while(j>=0&&a[j]>p)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=p;

    }
}
void display(int *a,int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    int i,c;
    printf("-------------MENU----------\n1)bubblesort\n2)selectionsort\n3)insertionsort\n4)display\n5)exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            bubblesort(arr,n);
            break;

            case 2:
            selectionSort(arr,n);
            break;

            case 3:
            insertionsort(arr,n);
            break;

            case 4:
            display(arr,n);

            case 5:
            exit(0);

            default:
            printf("wrong choice");
            break;
        }
    }
    
}