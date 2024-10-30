#include<stdio.h>

void Namaste();
void Bonjour();

int main() {
    char ch;
    printf("enter i for indian and f for french : ");
    scanf("%c",&ch);
    if(ch == 'i') {
        Namaste();
    } else {
        Bonjour();
    }
    return 0;
}
void Namaste() {
    printf("Namaste");
}
void Bonjour() {
    printf("French");
}