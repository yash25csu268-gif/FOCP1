#include <stdio.h>

int main() {
    int arr[100], n, i, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

     printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Choose deletion position:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
            pos = 0;
            break;
        case 2: 
            pos = n / 2; 
            break;
        case 3: 
            pos = n - 1;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
    
    printf("Array after deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}