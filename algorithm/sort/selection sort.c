#include <stdio.h>
int main (void) {
    int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (int j = 0; j < 10; j++){
        int min = arr[j];
        int min_index = j;
        for (int i = j; i < 10; i++) {
            if (arr[i] < min) {
                min = arr[i];
                min_index = i;
            }
        }
        // swap
        int temp = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = temp;
    }
    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
