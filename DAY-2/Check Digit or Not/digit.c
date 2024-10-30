#include<stdio.h>
#include<ctype.h>
int main () {
    char x;
    printf("enter the value of x : ");
    scanf("%c", &x);
    if (isdigit(x)) {
        printf("%c is a digit ", x);
    }
    else {
     printf("%C is not a digit ", x);
    }
    return 0;
}