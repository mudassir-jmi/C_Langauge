
#include<stdio.h>
int main()
{
    int a = 5, b = 10, c;
    c = a;
    a = b;
    b = c;
    printf("%d %d",a,b);

    return 0;
}
