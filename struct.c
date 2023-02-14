#include<stdio.h>
#include<stdlib.h>
struct node
{
    int roll;
    char name[50];
    float cgpa;
};
int main()
{
    struct node p[10];
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the roll of the student:");
        scanf("%d",&p[i].roll);
        printf("enter the name of the student:");
        scanf("%s",&p[i].name);
        printf("enter the cgpa of the student:");
        scanf("%f",&p[i].cgpa);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n\nDetails of student %d\n",i);
        printf("ROLL:%d",p[i].roll);
        printf("\nNAME:%s",p[i].name);
        printf("\nCGPA:%f",p[i].cgpa);
    }
}