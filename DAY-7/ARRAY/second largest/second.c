#include<stdio.h>
int main () {
    int arr[11] = {1,9,9,8,4,6,4,4,5,3,7};
    int count = arr[0];
    for(int i=0;i<10;i++) {
        if(arr[i] > count) {
            count = arr[i];
            arr[i] = 0;
        }
    }
    int count1 = arr[0];
    for(int i=0;i<10;i++) {
        if(arr[i] > count1) {
            count1 = arr[i];
        }
    }
   printf("%d",count1);
    return 0;
}