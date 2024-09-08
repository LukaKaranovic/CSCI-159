#include <cstdio>

int main() {
    int age;
    char sex; 
    char marital_status;
    printf("What is your age? ");
    scanf("%d", &age);
    printf("What is your sex (M or F)? ");
    scanf(" %c", &sex);
    printf("Are you married (Y or N)? ");
    scanf(" %c", &marital_status);
    
    if (sex == 'F') {
        printf("You work in an urban area.\n");
    } else if ((age >= 20) && (age <= 40) && (sex = 'M')) {
        printf("You may work anywhere.\n");
    } else if ((age > 40) && (age <= 60) && (sex =='M')) {
        printf("You work in an urban area.\n");
    } else {
        printf("ERROR.");
    }
    return 0;
}
