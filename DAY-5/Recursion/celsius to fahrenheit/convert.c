#include<stdio.h>
float convert(float c);
int main() {
    printf("c celsius is equal to %f fahrenheit", convert(1));
    return 0;

}

float convert(float c) {
    float a = (c*0.18) + 32 ;
    return a; 
}