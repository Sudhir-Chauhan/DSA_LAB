#include <stdio.h>

int main() {
    int n, target, i, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
