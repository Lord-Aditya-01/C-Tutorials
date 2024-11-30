#include<stdio.h>
int sequence(int f);

int main() {
    sequence(6);
    return 0;
}
int sequence(int f) {
    if(f == 0) {
            return 0;
    }
    if(f == 1) {
            return 1;
    }

    int x = sequence(f-1);
    int y = sequence(f-2);
    int a = x + y;
    printf("%d \n", a);
    return a;
}