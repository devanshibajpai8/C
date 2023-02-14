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
 
    printf("Total Cost is:%0.2f", profit);
}

int main() {
    float wght[20], value[20], capacity;
    int num, i, j;
    float r[20], temp;
    printf("Enter the capacity: ");
    scanf("%f", &capacity);
    printf("Enter the no. of items: ");
    scanf("%d", &num);
    printf("Enter the weight and value of each item:\n");
    for (i = 0; i < num; i++) {
    printf("weight and value of %d:",i);
    scanf("%f %f", &wght[i], &value[i]);
    }
    for (i = 0; i < num; i++) {
        r[i] = value[i] / wght[i];
    }
    for (i = 0; i < num; i++) {
        for (j = i + 1; j < num; j++) {
            if (r[i] < r[j]) {
                temp = r[j];
                r[j] = r[i];
                r[i] = temp;
 
                temp = wght[j];
                wght[j] = wght[i];
                wght[i] = temp;
 
                temp = value[j];
                value[j] = value[i];
                value[i] = temp;
            }
        }
    } 
    knapsack(num, wght, value, capacity);
    return 0;
}