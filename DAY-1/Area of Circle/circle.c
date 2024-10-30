#include<stdio.h>
int main() {
   float rad;
   printf("enter the value to radius ");
   scanf("%f", &rad);
   float mul = rad * rad;
   printf("the area of circle is %f", 3.14 * mul);
   return 0;
}
