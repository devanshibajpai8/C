#include<stdio.h>
void main()
{
    int capacity, items, cur_weight, item;
    int used[10];
    float total_profit;
    int i;
    int weight[10];
    int value[10];

    printf("Enter capacity:");
    scanf("%d", &capacity);

    printf("enter the number of items:\n");
    scanf("%d", &items);

    printf("Enter the weight and value:\n");
    for (i = 0; i < items; i++)
    {
        printf("Weight and value of %d:", i);
        scanf("%d %d", &weight[i],&value[i]);
    }

    for (i = 0; i < items; ++i)
        used[i] = 0;

    cur_weight = capacity;
    while (cur_weight > 0)
    {
        item = -1;
        for (i = 0; i < items; ++i)
            if ((used[i] == 0) &&
                ((item == -1) || ((float) value[i] / weight[i] > (float) value[item] / weight[item])))
                item = i;

        used[item] = 1;
        cur_weight -= weight[item];
        total_profit += value[item];
        if (cur_weight >= 0)
            printf("");
        else
        {
            int item_percent = (int) ((1 + (float) cur_weight / weight[item]) * 100);
            total_profit -= value[item];
            total_profit += (1 + (float)cur_weight / weight[item]) * value[item];
        }
    }
    printf("total cost %.2f Rs.\n", total_profit);
}