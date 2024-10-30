#include<stdio.h>
int main() {
    int x = 4;
    int y = 4;
    int i,j;
    for( i = 1 ; i <= x ; i++) {
        for( j = 1 ; j <= y ; j++) {
            printf("*");
        }
    }
    return 0;
}