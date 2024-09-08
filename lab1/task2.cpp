#include <cstdio>

int main () {
    float km;
    printf("How many kilometers?: ");
    scanf("%f", &km);
    float miles = 0.62 * km;
    printf("%.2lf kilometers is %.2lf miles.\n", km, miles);
    return 0;
}
