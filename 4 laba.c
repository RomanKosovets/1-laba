#include <stdio.h>

int main(){

    int var, var2;
    int min = 76;
    int max = 78;
    printf("Введите число\n");
    scanf("%d", &var);
    int result = min <= var&&var <= max;
    printf("Входит ли число %d в диапазон от %d до %d?\n%s\n", var, min, max, result? "Да, входит" : "Нет, не входит");
    printf("Введите число\n");
    scanf("%d", &var2);
    printf("Значение бита = %d\n", (var2 << 5)% 2);
    return 0;
}