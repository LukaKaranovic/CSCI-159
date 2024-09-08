#include <cstdio>

int reverseInteger(int num) {
    int reversed;
    if ((num >= 1000) && (num <= 9999)) {
        int num1 = ((num % 10) * 1000);
        int num2 = (((num / 10) % 10) * 100);
        int num3 = (((num / 100) % 10) * 10);
        int num4 = (num / 1000);
        reversed = num1 + num2 + num3 + num4;
    } else {
        printf("That's not a 4-digit number.\n");
        return 0;
    } 
    return reversed;
}


int main() {

    int num;
    printf("Print a 4-digit integer: ");
    scanf("%d", &num);
    int answer = reverseInteger(num);
    printf("%d\n", answer);
    
    return 0;
}
