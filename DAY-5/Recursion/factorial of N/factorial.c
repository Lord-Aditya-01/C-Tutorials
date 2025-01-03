#include<stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);
    printf("Factorial of n is %d", factorial(n));
    return 0;
}
int factorial(int n) {
    if(n==1) {
        return 1;
    } 
    // int nm1 = factorial(n-1);
    // int N = nm1 * n ;
    return factorial(n-1) * n;
}