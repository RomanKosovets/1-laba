#include <stdio.h>

int main(){

    int var, var2;
    int min = 76;
    int max = 78;
    printf("������ �᫮\n");
    scanf("%d", &var);
    int result = min <= var&&var <= max;
    printf("�室�� �� �᫮ %d � �������� �� %d �� %d?\n%s\n", var, min, max, result? "��, �室��" : "���, �� �室��");
    printf("������ �᫮\n");
    scanf("%d", &var2);
    printf("���祭�� ��� = %d\n", (var2 << 5)% 2);
    return 0;
}