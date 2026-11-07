#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

// Вариант 11:
//          4*x*x + 2*x - 19    при x >= -3.5
// F(x) =
//          2*x / (-4*x + 1)    при x < -3.5
//
// Контрольные примеры:
// x = 2    -> F = 4*2*2 + 2*2 - 19 = 1
// x = -3.5 -> F = 4*12.25 + 2*(-3.5) - 19 = 23
// x = -5   -> F = 2*(-5) / (-4*(-5) + 1) = -10 / 21 = -0.476

int main()
{
    setlocale(LC_ALL, "Russian");

    float x, f;

    printf("Введите x: ");
    scanf("%f", &x);

    if (x >= -3.5)
        f = 4 * x * x + 2 * x - 19;
    else
        f = 2 * x / (-4 * x + 1);

    // тернарная операция внутри printf
    printf("F(%.2f) = %.3f, число %s\n", x, f, f > 0 ? "положительное" : "не положительное");

    return 0;
}
