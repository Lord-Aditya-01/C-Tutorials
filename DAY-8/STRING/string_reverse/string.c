#include <stdio.h>

int main() {
    char s[] = "aditya";
    int x = 0;
    for(int i=0 ; s[i]!='\0' ; i++) {
        x++;
    }
    for(int i=0 ; i<(x)/2 ; i++){
        char temp = s[i];
        s[i] = s[x-i-1];
        s[x-i-1] = temp;
    }
    puts(s);
    return 0;
}