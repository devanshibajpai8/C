#include<stdio.h>
#include<math.h>
int main()
{
    int n; int c=0; int k=1;
    int count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    count++;
    for(int i=2;i<=sqrt(n);i++)
    {
        count++;
        if(n%i==0)
        {
         count++;
         printf("%d is not prime number.\n%d steps\n",n,count);
         k=2;
         break;
        }  
    }
        if(k==1) //no factors
        { 
            count++;
           printf("%d is a prime number.\n%d steps\n",n,count);
        } 

}