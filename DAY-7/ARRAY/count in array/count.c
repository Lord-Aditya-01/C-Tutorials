#include<stdio.h>
int function(int arr[], int n);

int main() {
    int arr[] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
    printf("%d", function(arr,9));
    return 0;
}
 int function(int arr[], int n) {
    int count = 0;
    for(int i = 0 ; i < n ; i++) {
        if(arr[i] == 9) {
            count++;
        }
    }
    return count; 
 }