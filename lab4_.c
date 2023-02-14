#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void descending()
{
    int i,j,min,p;
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int a[n];
    printf("enter the element in descending order:");
    clock_t start,end;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    start=clock();
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
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    end=clock();
    double total=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Total time  : %fs\n",total);
}
void random()
{
    clock_t start,end;
    int i,j,min,p;
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int a[n];
    start=clock();
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
    printf("before sorting:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
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
    printf("\nafter sorting:");
    for(int i=0;i<n;i++)
    {
        printf("%d " ,a[i]);
    }
    printf("\n");
    end=clock();
    double total=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Total time  : %fs\n",total);
}
void ascending()
{
    clock_t start,end;
    int i,j,min,p;
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    int a[n];
            printf("enter the element in ascending order:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    start=clock();
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
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    end=clock();
    double total=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Total time  : %fs\n",total);
}

int main(){
    
    int i,c;
    printf("-------------MENU----------\n1)random\n2)ascending\n3)descending\n4)exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            random();
            break;

            case 2:
            ascending();
            break;

            case 3:
            descending();
            break;

            case 4:
            exit(0);

            default:
            printf("wrong choice");
            break;
        }
    }
    
}