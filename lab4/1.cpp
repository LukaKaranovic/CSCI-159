#include <cstdio>

void whereToWork(char sex, char maritalStatus, int age) {
    if (sex == 'F') {
        printf("You will work only in urban areas.\n");
    } else if (sex == 'M' && age >= 20 && age <= 40) {
        printf("You may work anywhere.\n");
    } else if (sex == 'M' && age > 40 && age <= 60) {
        printf("You will work in urban areas only.\n");
    } else {
        printf("ERROR: Invalid input.\n");
    }
}

int main () {
int age;
char sex; 
char maritalStatus;
    printf("What is your age? ");
    scanf("%d", &age);
    printf("What is your sex (M or F)? ");
    scanf(" %c", &sex);
    printf("Are you married (Y or N)? ");
    scanf(" %c", &maritalStatus);

whereToWork(sex, maritalStatus, age);

return 0;
}
