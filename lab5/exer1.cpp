#include <cstdio>
#include <cstring>

int main () {
char inputString[100];
printf("Enter a string: ");
scanf("%[^\n]%*c", inputString);
printf("%s", inputString);


return 0;
}
