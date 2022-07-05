#include<stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    i = 1;  // declartion
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("sum is %d",sum);
    
    return 0;   
}