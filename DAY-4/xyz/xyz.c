#include<stdio.h>
#include <math.h>
int main() {
    int a,b;
    printf("enter the vaue of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d", &b);
    int c = pow(a,b);
    printf("%d",c);
    return 0;
}