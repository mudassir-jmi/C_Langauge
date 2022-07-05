#include<stdio.h>
int main() {
   // number divisible by 7 or 3
   // OR operator || 
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n % 7 == 0 || n % 3 == 0 )
    printf("Divisible by 7 or 3");
    else
      printf(" Not Divisible by 7 or 3");
    return 0;
    
}