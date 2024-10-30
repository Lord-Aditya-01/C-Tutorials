#include<stdio.h>
int main() {
    int a, b;
    printf("enter the value of a ");
    scanf("%d", &a);
    printf("enter the value of b ");
    scanf("%d", &b);
    int sum1 = a + a;
    int sum2 = b + b;
    printf("perimeter of rectangle is %d", sum1 + sum2);
    return 0;
}