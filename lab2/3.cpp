#include <cstdio>

int main() {
    int age1, age2, age3;
    printf("Input the first age: ");
    scanf("%d", &age1);
    printf("Input the second age: ");
    scanf("%d", &age2);
    printf("Input the third age: ");
    scanf("%d", &age3);
    
    if (age1 > age2 && age1 > age3) 
        printf("Age 1 is the oldest at %d years old.\n", age1);
    elseif (age2 > age1 && age2 > age3)
        printf("Age 2 is the oldest at %d years old.\n", age2);
    elseif (age3 > age1 && age3 > age2)
        printf("Age 3 is the oldest at %d years old.\n", age3);
    
}
