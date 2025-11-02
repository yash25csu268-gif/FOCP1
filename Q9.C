#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    
    while (originalNum != 0) {
        originalNum
        ++n;
    }

    originalNum = num; 

    
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum 
    }

    
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
