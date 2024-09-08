#include <cstdio>
// This is using task 2 from lab 2 (reversing a 4-digit number)
int reverseInteger(int num, int reversedNum = 0) {
    
    if (num == 0) { // Base case
       return reversedNum;
    } 
       int lastDigit = num % 10;
       reversedNum = reversedNum * 10 + lastDigit;
       return reverseInteger(num / 10, reversedNum); 
}

int main() {
    printf("Enter a 4-digit number: ");
    int n;
    scanf("%d", &n);
    
    if (n >= 1000 && n <= 9999) {
        printf("The reverse of %d is %d\n", n, reverseInteger(n));
    } else {
        printf("%d is not a 4-digit number, invalid. ", n);
    }

return 0;
}
