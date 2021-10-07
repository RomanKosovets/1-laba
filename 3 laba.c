#include <stdio.h>

int main() {
    int var;
    scanf("%x", &var);
    printf("2) 16CC => 10: %d\n", var);
    printf("3) 16CC: %x; 16CC >> 2: %x\n", var, var >> 2);
    printf("4) 16CC: %x; 16CC = %x \n", var, ~var);
    printf("5) %x^%x = %x \n", var, var >> 2, var ^ (var >> 2));
    return 0;

}
