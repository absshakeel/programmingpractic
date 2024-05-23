#include <stdio.h>
int findLargest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    int size;
    printf("Input the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Input %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = findLargest(arr, size);
    printf("The largest element is: %d\n", largest);

    return 0;
}
