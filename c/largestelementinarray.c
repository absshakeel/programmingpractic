#include <stdio.h>
int main() {
    int arr[10];
    int largest;
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest element: %d\n", largest);
    return 0;
}
