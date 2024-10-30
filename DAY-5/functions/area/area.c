#include<stdio.h>
#include<math.h>

float square(float a);
float circle(float r);
float rectangle(float c, float d);
int a, r , c, d;
int main() {
    printf("enter the value of a : ");
    scanf("%f", &a);
    printf("enter the value of r : ");
    scanf("%f", &r);
    printf("enter the value of c : ");
    scanf("%f", &c);
    printf("enter the value of d : ");
    scanf("%f", &d);

    printf("area is : %f \n", square(a));
    printf("area is : %f \n", rectangle(c,d));
    printf("area is : %f \n", circle(r));

    return 0;
}
float square(float a) {
    return a * a;
}
float rectangle(float c, float d) {
    return c * d;
}
float circle(float r) {
    return 3.14 * r * r;
}

