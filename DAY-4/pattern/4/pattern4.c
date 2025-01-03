#include<stdio.h>
int main() {
    int i=5 , j=5;
        // printf("*");
    for(i=1;i<=5;i++) {
        for(int k=1 ; k<=i ; k++) {
                printf(" ");
            }
        for(j=i;j<=5;j++){
            printf("*");
            }
            
            printf("\n");
    }
    return 0;
}
