#include <stdio.h>

/* Function to subtract two integers using bitwise operators */
int subtract(int a, int b) { 

    while (b != 0) {
        
        int borrow = (~a) & b;

       
        a = a ^ b;

        
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1 = 10;
    int num2 = 4;
    int result;

    result = subtract(num1, num2);
    printf("Result of %d - %d is: %d\n", num1, num2, result);

    num1 = 5;
    num2 = 12;
    result = subtract(num1, num2);
    printf("Result of %d - %d is: %d\n", num1, num2, result);
    
    return 0;
}
