// It is a game in which user has to enter any number till the input is an odd number.

#include<stdio.h>
int main() {
    int i;
    do {
        printf("enter any number : ");
        scanf("%d", &i);
    }while (i%2==0);
    printf("The game is over now you entered an odd number.");
    return 0;
}