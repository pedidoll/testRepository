#include <stdio.h>
int main (void) {
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (int j=0; j<10; j++) {
        for (int i=0; i<10-j-1; i++) {
            if (arr[i] > arr[i+1]) {
                // swap
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    // print result
    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}