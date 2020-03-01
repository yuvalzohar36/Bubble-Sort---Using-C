#include <stdio.h>
// Implemtion of bubble sort, using C .
void bubbleSort(int arr[], int arr_size) {
    int i = 0;
    for (int j = 1; j < arr_size; j++) {
        if (arr[j] < arr[j - 1]) {
            int temp = arr[j - 1]; // ==0
            arr[j - 1] = arr[j];
            arr[j] = temp; // Literally Swap Function
            bubbleSort(arr, arr_size);
        }
    }
}

int main() {
    int arr[] = { 1,0,2,-1,7,5,14,35,12,-22,101,444,102,222 }; // define the Source array
    int arr_size = sizeof(arr) / sizeof(int);    // find the array size
    bubbleSort(arr, arr_size);
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}



