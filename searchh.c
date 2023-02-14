#include<stdio.h>
#include<stdlib.h>
int linearsearch(int arr[],int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(element==arr[i])
        {
            printf("element %d found at position %d",element,i);
        }
    }
    return -1;
}
int binarysearch(int arr[],int n,int element)
{
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            printf("element found %d at position %d",element,mid);
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;

}

int main()
{
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    printf("elements of the array are:\n");
    for(int i=0;i<n;i++)
    {
    printf("%d\n",arr[i]);
    }
    int element;
    printf("enter the element to be searched:");
    scanf("%d",&element);
    int i,c;
    printf("-------------MENU----------\n1)linear search\n2)binary search\n3)exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            linearsearch(arr,n,element);
            break;

            case 2:
            binarysearch(arr,n,element);
            break;

            case 3:
            exit(0);

            default:
            printf("wrong choice");
            break;
        }
    }
}

