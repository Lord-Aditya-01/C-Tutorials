// Fing the salted form of a password entered by user if the salt is "123" & added at the end.

#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    char ch;
    // fgets(str,100,stdin);
    scanf("%s",str);
    char str2[10] = "123";
    strcat(str,str2);
    puts(str);
    return 0;
}