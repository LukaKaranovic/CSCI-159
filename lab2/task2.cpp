#include <cstdio>

int main() {
    int num, reversed;
    printf("Print a 4-digit integer: ");
    scanf("%d", &num);
    
    if ((num >= 1000) && (num <= 9999)) {
        int num1 = ((num % 10) * 1000);
        int num2 = (((num / 10) % 10) * 100);
        int num3 = (((num / 100) % 10) * 10);
        int num4 = (num / 1000);
        reversed = num1 + num2 + num3 + num4;
        printf("%d\n", reversed);
    } else {
        printf("That's not a 4-digit number.\n");
    } 
    return 0;
} 
