#include <cstdio>

int main() {

    // Outputs first pattern, an asterisk pyramid.
    printf("Pattern A: \n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        } 
        printf("\n");
    }
    printf("\n");
    
    // Outputs second pattern, an asterisk diamond.
    printf("Pattern B: \n");
    for (int i = 1; i <= 3; i++) { 
        for (int j = i; j <= 5; j++) { 
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) { 
            printf("*");
        }
        printf("\n");
    }

    for (int i = 2; i >= 1; i--) {
        for (int j = i; j <= 5; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Outputs third and final pattern, an inverted triangle of 0s and 1s.
    printf("Pattern C: \n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (4 - i + 1) * 2 - 1; k++) {
            if (k % 2 == 0) { 
                printf("0");
            } else { 
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
