#include <cstdio>

int main () {
    int a;
    printf("Input a number: ");
    scanf("%d", &a);
    if (a > 0) {
        int result = 1;
        for (int i = 1; i <= a; i++) {
        result = result * i;
        }
        printf("The factorial of %d is %d.\n", a, result);
    } else {
        printf("The factorial of 0 is 0.\n");
    }
    return 0;
}

