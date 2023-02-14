#include<stdio.h>
#include<stdlib.h>
struct pkt{
    char ch1[10];
    char ch2[10];
    char ch3[10];
};
int main()
{
    struct pkt p[10];
    printf("enter the number:");
    int n;
    scanf("%d",&n);
    int b,c,d;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    p->ch1==b+'0';
    p->ch2==c+'0';
    p->ch3==d+'0';
    printf("content of each variable:");
    printf("%c %c %c",p->ch3,p->ch2,p->ch1);
    printf("\nThe original number is:");
    printf("%d %d %d",d,c,b);
}