#include "stdio.h"
#include "string.h"

int main() {

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    char mas[255];

    printf("Введите строку:\n");
    scanf("%s", mas);
    {
        for (int i = 0; i < strlen(mas); i++) {
            if (mas[i] >= '0' && mas[i] <= '9')
                count1++;
            if (mas[i] >= 'A' && mas[i] <= 'Z')
                count2++;
            if (mas[i] >= 'a' && mas[i] <= 'z')
                count3++;
        }
    }
    printf("В строке %d цифр\n", count1);
    printf("В строке %d прописных букв\n", count2);
    printf("В строке %d строчных букв\n", count3);

    int value;
    char result[10];
    char *str[12] = {"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять", "десять"};
    printf("Введите число:\n");
    scanf("%d", &value);
    strcpy(result, str[value]);
    printf("%s", result);
    return 0;
}
