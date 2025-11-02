#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int foundDuplicate = 0;

    // Input array size
    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);

    if(n <= 0 || n > 100) {  // Data validation for array size
        printf("Invalid array size.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < -100000 || arr[i] > 100000) { // Data validation for element range
            printf("Element out of valid range (-100000 to 100000).\n");
            return 1;
        }
    }

    printf("Duplicate elements: ");
    
    // Detect duplicates using frequency checking
    for(i = 0; i < n; i++) {
        int count = 0;
        // Check if this element appeared earlier
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count = -1;  // Already counted
                break;
            }
        }
        if(count == -1) continue;

        // Count occurrences of arr[i]
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > 0) { // If duplicate found
            printf("%d ", arr[i]);
            foundDuplicate = 1;
        }
    }

    if(!foundDuplicate) {
        printf("-1"); // No duplicates found
    }

    printf("\n");
    return 0;
}