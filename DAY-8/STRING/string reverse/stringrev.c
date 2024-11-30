#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Hello, World!";
    
    printf("Original String: %s\n", str);

    // Reverse the string
    strrev(str);
    
    printf("Reversed String: %s\n", str);

    return 0;
}
