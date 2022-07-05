#include<stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    i = 1;  // declartion
    do
    {
        sum = sum + i;  // 1
        i++;
    } while (i<=n);

    printf("sum is %d",sum);
    
    return 0;   
}