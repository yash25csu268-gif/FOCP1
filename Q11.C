#include <stdio.h>

int main() {
    int scores[] = {12, 35, 69, 75, 105, 22, 98, 76, 22, 53};
    int n = sizeof(scores) / sizeof(scores[0]); 
    
    int even_array[n];
    int odd_array[n];

    int even_count = 0; 
    int odd_count = 0;  

    
    for (int i = 0; i < n; i++) {
         if (scores[i] % 2 == 0) {
             even_array[even_count] = scores[i];
             even_count++;
        } else {
            
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }

    
    printf("Even numbers: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");

    
    printf("Odd numbers: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf("\n");

    return 0;
}