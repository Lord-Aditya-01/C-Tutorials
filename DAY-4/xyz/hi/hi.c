#include<stdio.h>
int main() {
    printf("Enter ur num");
    int n, i, not_prime;
    scanf("%d", &n);
    for (i=2 ; i<n; i++) {
        if (n%i == 0 && n != 2) {
            not_prime = 1;
            break;
        }
    }
    if (not_prime) {
        printf("this num is not prime");
    } else {
        printf("it is prime");
    }
    return 0;
}