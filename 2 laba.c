

#include <stdio.h>
#include <math.h>

int main() {

    float alpha, fun1, fun2;
    scanf("%f", &alpha);
    fun1 = cos(alpha) + cos(2 * alpha) + cos(6 * alpha) + cos(7 * alpha);
    fun2 = 4 * cos(alpha / 2) * cos((5 * alpha) / 2) * cos(4 * alpha);
    printf("fun1 = %f\nfun2 = %f\n", fun1, fun2);
    return 0;
}
