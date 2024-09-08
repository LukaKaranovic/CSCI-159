#include <cstdio>
// This is from exercise 2 in lab 3.
int findGCD(int num1, int num2) { 
    if (num2 != 0) {
        return findGCD(num2, num1 % num2);
    } else {
        return num1;
    }
}



int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if (num1 < num2) { // Makes num1 greater than or equal to num 2.
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    int ans = findGCD(num1, num2);
    printf("The GCD is %d\n", ans);

    return 0;
}
