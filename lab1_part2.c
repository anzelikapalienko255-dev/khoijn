#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    
    printf("Введіть значення x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Помилка введення!\n");
        return 1;
    }
    if (x <= 0) {
        y = -pow(x, 2) - 12;
        printf("y = %.4f\n", y);
    } 
    else if ((x > 2 && x <= 12) || (x > 22 && x < 32)) {
        y = -9 * pow(x, 3) + 5 * pow(x, 2);
        printf("y = %.4f\n", y);
    } 
    else {
        printf("Функція не існує для заданого x\n");
    }

    return 0;
}