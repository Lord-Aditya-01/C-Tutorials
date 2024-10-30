#include<stdio.h>
int sum(int n);
int main() {
    printf("sum of n natural no is : %d", sum(5));
    return 0;
}

int sum(int n) {
    if(n == 1 ) {
        return 1;
    }
    int a = sum(n-1);
    int sum = a + n;
    return sum;
}