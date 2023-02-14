#include<stdio.h>
#include<stdlib.h> 

void knapsack(int n, float wght[], float value[], float cap) {
   float x[20], profit = 0;
   int i, j, u;
   u = cap; 
   for (i = 0; i < n; i++) {
        if (wght[i] > u)
            break;
        else {
            profit = profit + value[i];
            u = u - wght[i];
        }
    }
    if (i < n)
        x[i] = u / wght[i];
    profit = profit + (x[i] * value[i]);
 
    printf("Cost is:%0.2f", profit);
}