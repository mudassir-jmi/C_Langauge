#include<stdio.h>
int main() {
    float n1, n2, avg;
    printf("Enter first no: ");
    scanf("%f",&n1);
    printf("Enter second no: ");
    scanf("%f",&n2);

    avg = n1 + n2 / 2;
    printf("Average : %f", avg);
    return 0;
    
}