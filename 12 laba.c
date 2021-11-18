#include "stdio.h"
#include <windows.h>
#include <string.h>

int main(){

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    FILE *fp;
    char name[] = "C:\\Users\\roman\\CLionProjects\\Project C\\test.txt";

    if ((fp = fopen( name, "w")) == NULL) {
        printf("Ќе удалось открыть файл");
        return 0;
    }

    int date, index_month;
    int f = 1;
    int min = 1;
    int max = 10;
    char *month[12] = { "января", "февраля", "марта", "апреля", "мая", "июня", "июля", "августа", "сент¤бря", "октября", "ноября", "декабря"};
    char given_month[80];

    printf("Введите дату\n");
    scanf("%d%s", &date, given_month);

    int j =0;
    while (j < 12){
        if (strcmp (month[j], given_month) == 0) {
            index_month = j;
            break;
        }
        j += 1;
    }

    for (int i = date; min <= max; min++){
        fprintf(fp, "%d %s\n", i, month[index_month]);
        if ( i == 31 && f == 1){
            i = 1;
            f = 0;
            if (index_month == 11){
                index_month = 0;
            }
            else
                index_month += 1;
        }
        i += 1;
    }
    fclose(fp);
    return 0;
};

