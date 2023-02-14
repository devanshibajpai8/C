#include<stdio.h>
#include<time.h>

void insertion_sort(int *arr, int n, int order);
double insertion_sort_tc(int *arr,int n, int order);

int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }

    int choice;
    printf("Enter your choice :\n");
    printf("1. Display the array\n2. Sort the array in ascending order\n3. Sort the array in descending order\n4.TC to sort ascending of array\n5. TC to sort ascending of data already in ascending order\n6. TC to sort ascending of data already in descending order\n7. TC to sort ascending of all data for all cases\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("The array is :\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break;
    case 2: 
        printf("The sorted array is :\n");
        insertion_sort(arr, n, 1);
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break;
    case 3:
        printf("The sorted array is :\n");
        insertion_sort(arr, n, 0);
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break;
    case 4:
        printf("The TC for sorting in ascending order is : %f\n", insertion_sort_tc(arr,n, 1));
        break;
    case 5:
        printf("The TC to sort ascending of data already in ascending order is : %f\n", insertion_sort_tc(arr,n, 0));
        break;
    case 6:
        printf("The TC to sort ascending of data already in descending order is : %f\n", insertion_sort_tc(arr,n, 2));
        break;
    case 7:
        printf("The TC to sort ascending of all data is : %f\n", insertion_sort_tc(arr,n, 3));
        break;
    default:        
        printf("Invalid choice\n");
        break;

    }

}

void insertion_sort(int *arr, int n, int order)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        if (order == 1)
        {
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
        }
        else
        {
            while (j >= 0 && arr[j] < key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
        }
        arr[j + 1] = key;
    }
}

double insertion_sort_tc(int *arr,int n, int order)
{
    double start, end;
    start = clock();
    insertion_sort(arr,n,1);
    end = clock();
    return (double)((end - start) / CLOCKS_PER_SEC);
}
