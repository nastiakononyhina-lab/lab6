#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int year;   // год
    int ost;    // остаток от деления на 4

    printf("Введите год: ");
    scanf("%d", &year);

    ost = year % 4;

    // високосный: кратен 4 и не кратен 100, либо кратен 400
    if ((ost == 0 && year % 100 != 0) || year % 400 == 0)
        printf("год %d високосный\n", year);
    else
        printf("год %d не високосный\n", year);

    return 0;
}
// Проверка:
// 2018 -> год 2018 не високосный
// 1900 -> год 1900 не високосный
// 2020 -> год 2020 високосный
