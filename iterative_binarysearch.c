#include<stdio.h>
int iterativeBinarySearch(int arr[], int start, int end, int element){
   while (start <= end){
      int middle = start + (end - start)/2;
      if (arr[middle] == element)
         return middle;
      if (arr[middle] < element)
         start = middle + 1;
      else
         end = middle - 1;
   }
   return -1;
}
int main(void){
    int n, element;
    int arr[30];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements in the array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search: ");
        scanf("%d",&element);
    int found_index = iterativeBinarySearch(arr, 0, n-1, element);
    if(found_index == -1 ) {
        printf("Element not found in the array ");
    }
    else {
        printf("Element found at index : %d",found_index);
    }
    return 0;
}