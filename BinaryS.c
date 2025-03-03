#include<stdio.h>
int main(){
    int n, target, i, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (found == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}