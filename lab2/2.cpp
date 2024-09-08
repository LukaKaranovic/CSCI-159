#include <cstdio>

int main() {
    float length, width;
    printf("The length of the rectangle: ");
    scanf("%f", &length);
    printf("The width of the rectangle: ");
    scanf("%f", &width);
    
    if (length == width) { 
        printf("It is a square.\n");
    } else {
        printf("It is not a square.\n");
    }
    
    return 0;
}
