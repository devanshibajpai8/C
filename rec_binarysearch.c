#include <stdio.h>
int recBinarySearch(int arr[], int start, int end, int element){
   if (end >= start){
      int middle = start + (end - start )/2;
      if (arr[middle] == element)
         return middle;
      if (arr[middle] > element)
         return recBinarySearch(arr, start, middle-1, element);
      return recBinarySearch(arr, middle+1, end, element);
   }
   return -1;
}
int main(void)
{
    int n;
   printf("Enter size of array:");
   scanf("%d",&n);
   int a[n];
   printf("Enter elements: ");
   for(int i=0;i<n;i++)
   {
       scanf("%d", &a[i]);
   }
   int element;
   printf("Enter the element to be searched:  ");
   scanf("%d", &element);
   int found_index = recBinarySearch(a, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d \n",found_index);
      printf("Element found is: %d",a[found_index]);
   }
   return 0;
}