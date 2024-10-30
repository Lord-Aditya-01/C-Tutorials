#include<stdio.h>
void table();
int n;

int main() {
    
    printf("enter the value of n : ");
    scanf("%d", &n);
    table();
    
    return 0;
}
void table() {
    for (int i = 1 ; i <= 10 ; i++) {
        int sum = n*i;
        printf("%d \n", sum);
    }
}
