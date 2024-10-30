#include<stdio.h>
int main () {
    int x,y;
    printf("enter the value of x :");
    scanf("%d", &x);
    printf("enter the value of y :");
    scanf("%d", &y);
    if (x > y) {
        printf("%d", y);
    }
    else {
        printf("%d", x);
    }
    return 0;
}