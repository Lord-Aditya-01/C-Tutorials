// Write a program in C to find the maximum number between two numbers using a pointer.

#include<stdio.h>
int main() {
    int x,y,*x,*y;
    printf("enter the value of x : ");
    scanf("%d",&x);
    printf("enter the value of y : ");
    scanf("%d",&y);
    printf("%p",*x);
    return 0;
}