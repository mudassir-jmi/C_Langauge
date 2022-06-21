#include<stdio.h>
int main()
{
   float b, h, a;   // declare variable and its data type
   printf("enter base & height: ");   // message for user to enter base & height
   scanf("%f %f",&b,&h);   // take input from user
   a = (b * h ) / 2;      // formula to find area of triangle
   printf("Area of triangle is %f ", a);   // message for user and print value of area
   return 0;     // return value 0 to  operating system for successful run code no error

}
