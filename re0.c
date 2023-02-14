#include<stdio.h>
#include<conio.h>
int gcd(int,int);

void main()
{
    int a,b,r;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    r=gcd(a,b);
    printf("GCD:%d",r);

}
int gcd(int a,int b)
{
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else if(a<b)
    return gcd(b,a);
    else
    return gcd(b,a%b);
}

