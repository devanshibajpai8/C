#include<stdio.h>
struct class
{
    char name[20];
    int roll;
    int marks;

};
int main()
{
    struct class c;
    printf("enter name:");
    scanf("%s",&c.name);
    printf("enter roll:");
    scanf("%d",&c.roll);
    printf("enter marks:");
    scanf("%d",&c.marks);
    printf("name:%s roll:%d marks:%d",c.name,c.roll,c.marks);
    return 0;

}