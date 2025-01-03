// In an array of numbers, find how many times does a number 'x' occurs?

#include<stdio.h>

int count(int x, int arr[]);
int main() {
    int x,countx;
    printf("enter x : ");
    scanf("%d", &x);
    int arr[] = {1,2,3,5,7,8,9,1,5,6,8,4,6,2};
    // int size = sizeof(arr) / sizeof(arr[0]);
    printf("The number %d occurs %d times in the array.\n",x,count(x,arr));

    return 0;
}

int count(int x, int arr[]) {
    int countx = 0;
    for(int i=0 ; i<14 ; i++) {
        if(arr[i] == x){
            countx++;
        }
    }
    return countx;
}