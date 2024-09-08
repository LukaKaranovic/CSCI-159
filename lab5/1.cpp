#include <cstdio>
#include <cstring>

int main() {
// Define both string arrays
char inputString[100];
// Get input from user
printf("Enter a string: ");
scanf("%[^\n]%*c", inputString);

// Use a loop to iterate through each character and input into reversed string.

    for (int i = strlen(inputString)-1; i >= 0; i--) {
        printf("%c", inputString[i]);
    }
printf("\n");

return 0;
}
