#include <cstdio>
#include <cstring>

int main() {

char inputString1[100];
printf("Enter a string: ");
scanf("%[^\n]%*c", inputString1);
char inputString2[100];
printf("Enter another string: ");
scanf("%[^\n]%*c", inputString2);

char *resultString;
resultString = strcat(inputString1, inputString2);
printf("%s\n", resultString);


return 0;
}
