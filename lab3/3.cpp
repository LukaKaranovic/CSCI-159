#include <cstdio>

int main() {
    // Program gathers user input for an integer, and prints it in words.
    
    int n, num = 0;
    
    // Get user input for a number.
    printf("Input any number: ");
    scanf("%d", &n);
    
    // Reverses the number
    while (n != 0) {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    
    // Prints the number in words.
    for (int i = num; i > 0; i /= 10) {
        switch (i % 10) {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;        
            case 9:
                printf("Nine ");
                break;            
        }
    }
    printf("\n");

    return 0;
}
