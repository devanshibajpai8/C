#include <stdio.h>
int main() { 
    int n,a,i;
    int prime = 1;
    int count=0;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=2;i<a;i++) {
        count++;
      if((a % i) == 0) {
         prime = 0;
       }
    }
    if (prime == 1)
      printf("%d is a prime number.\n%d steps\n",a,count+2);
    else
      printf("%d is not a prime number.\n%d steps\n",a,count+2);  
   return 0;
}