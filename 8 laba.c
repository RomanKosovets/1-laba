#include "stdio.h"
#include "string.h"

int main() {

    printf("№1\n");
    char s1[10];
    char s2[10];
    printf("Введите две строки:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    strcat(s1, s2);
    printf("Конкатенация (сложение) двух строк: %s\n", s1);


    printf("№2\n");
    printf("Введите две строки:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    printf("Введите кол-во символов для копирования в другую строку\n");
    int kol;
    scanf("%d", &kol);
    strncat(s1, s2, kol);
    printf("Копирование первых n символов одной строки в другую строку: %s\n", s1);


    printf("№3\n");
    printf("Введите строку:\n");
    scanf("%s", s1);
    printf("Введите символ для поиска в строке\n");
    char symbol;
    scanf(" %c", &symbol);
    char *result3;
    result3 = strchr(s1, symbol);
    if (result3 == NULL)
        printf("Такого символа в строке нет\n");
    else
        printf("Индекс символа: %lld\n", result3 - s1);


    printf("№4\n");
    printf("Введите две строки:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    char *result4;
    result4 = strpbrk (s1, s2);
    if (result4 == NULL)
        printf ("Символы не найдены\n");
    else
    printf ("Искомый символ на позиции %lld\n",result4 - s1 + 1);


    printf("№5\n");
    printf("Введите две строки:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    int length;
    length = strcspn(s1, s2);
    printf("Длина отрезка одной строки, не содержащего символы второй строки %d\n", length);
    return 0;
}
