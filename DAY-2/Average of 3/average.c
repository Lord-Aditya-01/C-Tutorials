#include<stdio.h>
int main () {
    int x, y, z ;
    printf("enter the value of x :");
    scanf("%d", &x);
    printf("enter the value of y :");
    scanf("%d", &y);
    printf("enter the value of z :");
    scanf("%d", &z);
    int sum = x + y + z;
    printf("%d", sum/3);
    return 0;
}