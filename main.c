#include <stdio.h>

int main() {
    // Оголошення змінних
    int a = 5, b = 23;
    int sa, sg;

    // Обчислення середнього арифметичного
    sa = (a + b) / 2;

    // Обчислення потроєної суми
    sg = 3 * (a + b);

    // Виведення результатів
    printf("sa = %d\n", sa);
    printf("sg = %d\n", sg);

    return 0;
}