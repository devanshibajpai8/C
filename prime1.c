#include<stdio.h>
#include<time.h>
int main() 
{
    int n;   
    int count=0;  
    printf("Enter the number:");
    scanf("%d",&n); 
    count++;
    int c=1;    
    for(int i=2;i<n/2;i++)  
    {
        count++;
        if((n%i)==0)
        {
        c=0;
        break;
        }
    }
    if(c==0)           
    {
        count++;
        printf("%d is not a prime number.\n%d steps",n,count);
    }
    else
    {
        count++;
        printf("%d is a prime number.\n%d steps",n,count);
    }
    return 0;
}