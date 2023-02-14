#include<stdio.h>
#include<stdlib.h>

int create(int *a,int n)
{
    int i; 
   
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }  
    return *a;
}
int display(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("elements:%d",a[i]);
    }
    printf("\n");
    return *a;
}
    
void insert(int *a,int n,int capacity)
{
    int p,i,pos;
    printf("\nenter the no. to be inserted:");
    scanf("%d",&p);
    printf("\nenter the pos where the no. has to be inserted:");
    scanf("%d",&pos);
    if(n>=capacity)
    {
        printf("insertion not possible");
    }
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=p;
    
}
    
void delete(int *a,int n,int capacity)
{
    int p,i,pos;
    printf("\nenter the pos where the no. has to be deleted:");
    scanf("%d",&pos);
    if(n>=capacity)
    {
        printf("deletion not possible");
    }
    
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
}
void search(int *a,int n,int capacity)
{
    int item;
    printf("ennter the no. to be searched:");
    scanf("%d",&item);
    for(int i=0;i<n;i++)
    {
    if(a[i]==item)
        printf("elements is present at %d",i);
    }
}
void large_small(int *a,int n)
{
    int lar=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>lar)
        lar=a[i];
    }
    printf("\nlargest:%d",lar);
    int small=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<small)
        small=a[i];
    }
    printf("\nsmallest:%d",small);
}
void sort(int *a,int n)
{
    int d;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                d=a[i];
                a[i]=a[j];
                a[j]=d;

            }

        }
    }
    printf("\nsorted array:");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    
}
    

void main()
{
    int i,n;
    int *a=NULL;
    a = (int *)malloc(n * sizeof(int));
   
    int s,y,p;
    printf("enter 1 to start:");
    scanf("%d",&s);
      printf("enter the no. of elements:");
         scanf("%d",&n);
    while(s==1)
    {
        printf("MENU\n1)Create an array\n2)display the array\n3)insert an elemet at a given position\n4)Delete an elememt from a given position\n5)Search an element\n6)Display the largest and smallest elements\n8)sort the array");
        printf("\nenter your choice:");
        scanf("%d",&p);
       
        switch(p)
        {
        case 0:
         break;
        case 1:
          create(a,n);
          break;
         
        case 2:
          display(a,n);
          break;
          
        case 3:
          insert(a,n,100);
          n=n+1;
          break;
        case 4:
          delete(a,n,100);
          n=n-1;
          break;
          
        case 5:
          search(a,n,100);
          break;
        
        case 6:
          large_small(a,n);
    
        case 7:
          sort(a,n);
    
        }
        
    
    
}
}

