#include <stdio.h>

int main() {
    int rows = 3;
    
    for (int i = 1; i <= 3; i++) {
        // Print spaces before the stars
        for (int j = i; j < 3; j++) {
            printf(" ");
        }
        
        // Print stars with spaces in between
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}
