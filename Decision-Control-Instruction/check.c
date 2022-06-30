#include<stdio.h>
int main() {
   int x;
   printf("Enter a number: ");
   scanf("%d",&x);
   if (x % 5 == 0)
   printf("Divisible by 5");
   else 
       printf(" Not Divisible by 5");
    return 0;
    
}