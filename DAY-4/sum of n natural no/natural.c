// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n : ");
//     scanf("%d", &n);
//     printf("sum of first n natural number is %d", n * (n+1)/2);
//     return 0;
// }

// Alternate Solution

#include<stdio.h>
int main() {
    int sum = 0;
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(int i=0 ; i <= n ; i++) {
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}