// Write a structure to store the data of students including the roll no, name and cgpa.


#include<stdio.h>
#include<string.h>

struct students {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct students s1;
    s1.roll = 1224;
    s1.cgpa = 8.9;
    strcpy(s1.name, "aditya");
    printf("name is : %s\n", s1.name);
    printf("roll no : %d\n",s1.roll);
    printf("cgpa : %.2f\n",s1.cgpa);
    return 0;
}