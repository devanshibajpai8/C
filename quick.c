#include<stdio.h>
#include<stdlib.h>
    int sort(int a[], int low, int high) 
    {
        int i=low-1;
        int j=low;
        int pivot=a[high];
        for(int j=0;j<high;j++)
        {
            if(a[j]<=pivot)
            {
                i=i+1;
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        int temp;
        temp=pivot;
        pivot=a[i+1];
        a[i+1]=temp;
        return i+1;
    }

    int* sorrt(int a[], int low, int high) {
        if (low < high) {
            int p = sort(a, low, high);
            sorrt(a, low, p - 1);
            sorrt(a, p + 1, high);
        }
        return a;
    }

    void display(int a[],int n) 
    {
        printf("the array is after insertion sort:");
        for (int i = 0; i < n; i++) 
        {
            printf("%d",a[i]);
        }
    }

    int main() 
    {
        printf("enter the value of n:");
        int n;
        scanf("%d",&n);
        int a[n];
        printf("enter the elements:");
        for (int i = 0; i < n; i++) 
        {
            scanf("%d",&a[i]);
        }
        int l = a[0], h = a[n - 1];
        sort(a,l,h);
        sorrt(a, l, h);
        display(a,n);
    }
