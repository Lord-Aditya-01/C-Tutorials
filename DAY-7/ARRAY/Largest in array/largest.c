#include<stdio.h>

void find(int arr[], int n);

int main() {
    int arr[] = {2, 3, 5, 6, 8, 9, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    find(arr, n);
    return 0;
}

void find(int arr[], int n) {
    if (n <= 0) { 
        // Edge case: if the array size is zero or negative
        printf("Array is empty.\n");
        return;
    }

    int largest = arr[0]; // Initialize the largest with the first element
    for (int i = 1; i < n; i++) { // Start from the second element
        if (arr[i] > largest) {
            largest = arr[i]; // Update the largest value
        }
    }
    printf("The largest element is: %d\n", largest);
}
