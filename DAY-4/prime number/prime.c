#include<stdio.h>
int main() {
    int a;
    for(int i = 2 ; i<=300 ; i++) {
        if(i%2==0 || i%3==0 || i%5==0) {
            double b = i;
        }
        else {
            printf("%d \n", i);
        }
    }
}