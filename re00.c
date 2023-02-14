#include <stdio.h>
 
int hcf(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int main()
{
    int a,b;
    printf("enter the values of and b:");
    scanf("%d %d",&a,&b);
    printf("hcf:%d\n", hcf(a, b));
    return 0;
}