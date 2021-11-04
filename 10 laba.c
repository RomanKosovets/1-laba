#include "stdio.h"
#include <malloc.h>
#include <math.h>

int NOD(int a, int b) {
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;
}

int NOK(int c, int d) {
    int x, y;
    x = c;
    y = d;
    while (x != y)
        if (x > y)
            x = x - y;
        else
            y = y - x;
    return (c * d) / x;
}

int * fun3(int number, int *len)
{
    *len = (int)log10( (double)number ) + 1;
    int *mas = (int*)malloc( *len * sizeof(int) );

    int i;
    for(i = *len - 1; i >= 0; i--)
    {
        mas[i] = number%10;
        number /= 10;
    }
    return mas;
}

int main() {
    int A, B, result1;
    int C, D, result2;
    int value, len = 0, i;

    printf("Введите два числа:\n");
    scanf("%d%d", &A, &B);
    result1 = NOD(A, B);
    printf("Наибольший общий делитель для чисел %d и %d = %d\n", A, B, result1);

    printf("Введите два числа:\n");
    scanf("%d%d", &C, &D);
    result2 = NOK(C, D);
    printf("Наименьшее общее кратное для чисел %d и %d = %d\n", C, D, result2);

    printf("Введите число:\n");
    scanf("%d", &value);
    int *mas = fun3(value, &len);
    printf("Массив элементов числа %d:", value);
    for(i = 0; i < len; ++ i)
        printf("%2d", mas[i]);
    return 0;
}
