#include <stdio.h>
int main()
{
    int i = 1;
    char *c = (char*)&i;
    if (*c)
    {
        printf("It is in little endian");
    } 
    else
    {
        printf("It is in big endian");
    }
    getchar();
    int num = 0x12345678;
    int b0,b1,b2,b3,b4,b5,b6,b7;
    int res = 0;
    b0 = (num & 0xf) << 28;
    b1 = (num & 0xf0) << 24;
    b2 = (num & 0xf00) << 20;
    b3 = (num & 0xf000) << 16;
    b4 = (num & 0xf0000) << 12;
    b5 = (num & 0xf00000) << 8;
    b6 = (num & 0xf000000) << 4;
    b7 = (num & 0xf0000000) << 4;
    res = b0 + b1 + b2 + b3 + b4 + b5 + b6 + b7;
    printf("%d \n", res);
    return 0;
}