#include<stdio.h>
int main(){
    float a[2];
    printf("enter the price of a : ");
    scanf("%f", &a[0]);
    printf("enter the price of b : ");
    scanf("%f", &a[1]);
    printf("enter the price of c : ");
    scanf("%f", &a[2]);

    printf("final cost : %f %f %f", a[0]+a[0]*(0.18), a[1]+a[1]*(0.18), a[2]+a[2]*(0.18));
    return 0;
}