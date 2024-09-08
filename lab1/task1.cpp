#include <cstdio>

int main() {
    float num1, num2, num3, num4;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    printf("Enter the fourth number: ");
    scanf("%f", &num4);
    
    float sum = num1 + num2 + num3 + num4;
    float average = sum / 4;
    printf("The sum of the four numbers is %.2lf\n", sum);
    printf("The average of the four numbers is %.2lf\n", average);
  
    return 0;
}
