// Take string input and print it using a pointer
#include<stdio.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    char *ptr = str;
    printf("%s",str);
    while(*ptr != '\0') {
        
        break;
    }
    return 0;
}