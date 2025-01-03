// take a string input from the user with two int n and m and print the string from n to m from the string entered by the user 

#include<stdio.h>

void slice(char s[100],int n,int m);

int main() {
    char s[100],str[100];
    int n,m;
    printf("Enter the string : ");
    fgets(s,sizeof(s),stdin);
    printf("Enter the value of n and m : ");
    scanf("%d %d",&n,&m);
    slice(s,n,m);
    printf("%s",str[100]);
    return 0;

}

void slice(char s[100],int n,int m) {
    char str[100];
    int j = 0;
    for(int i = n ; i <= m ; i++ , j++) {
        str[j] = s[i];
    }
    str[j] = '\0';
    puts(str);
}