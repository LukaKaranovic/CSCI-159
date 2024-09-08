#include <cstdio>
    int factorial(int n) {
        int result;
        if (n > 0) {
            result = 1;
            for (int i = 1; i <= n; i++) {
            result *= i;
            }
        } else {
            result = 0;
        }
     return result;
    }


int main () {
    int a;
    printf("Input a positive number to get the factorial of it: ");
    scanf("%d", &a);
    if (a >= 0) {
        int answer = factorial(a);
        printf("The factorial of %d is %d.\n", a, answer);
    } else {
        printf("Not a positive number, try again. \n");
     
    }
    return 0;
}
