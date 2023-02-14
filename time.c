#include <stdio.h>
#include<time.h>

int main() { 
    clock_t start,end;
    start=clock();
    
    end=clock();
    double total=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Total time  : %fs\n",total);
      
   return 0;
   


}