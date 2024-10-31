#include <stdio.h>
void minMax(int arr[], int count, int *min, int *max);
int main() {
    int min=1000, max=0;
    int i, count;
    int arr[20];
    printf("Enter how many numbers you want to enter in the array: ");
    scanf("%d", &count);
    for (i = 0; i < count; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    minMax(arr, count, &min, &max);
    printf("Minimum Number: %d, Maximum Number: %d\n", min, max);
}
void minMax(int arr[], int count, int *min, int *max) {
    int i;
    for (i = 0; i < count; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}