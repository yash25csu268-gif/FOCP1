#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[100]; 
    int size;      
    int element;   
    int position; 

    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before insertion: ");
    printArray(arr, size);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert (0 for front, %d for end, or any index in between): ", size);
    scanf("%d", &position);

    
    if (position < 0 || position > size || size >= 100) {
        printf("Invalid position or array is full. Cannot insert.\n");
        return 1;
    }

    
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++; 

    printf("Array after insertion: ");
    printArray(arr, size);

    return 0;
}