#include<stdio.h>
int main () {
    int marks;
    printf("enter marks of student : ");
    scanf("%d", &marks);
    if(marks < 30) {
        printf("C");
    } 
    else if ( marks < 70 && marks >= 30 ) {
        printf("B");
    }
    else if(marks < 90 && marks >=70) {
        printf("A");
    }
    else if( 90 <= marks <= 100) {
        printf("A+");
    }
    return 0;    
}