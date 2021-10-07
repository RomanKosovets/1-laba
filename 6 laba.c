#include "stdio.h"
#include <malloc.h>

int main() {

    float m[5] = {-3.4, 4.5, -5.6, 6.7};
    float *p = m;
    for (int i = 0; i < 4; i++) {
        printf("%f ", *(p + i));
    }
    printf("\n");
    float *a;
    int i, n;
    scanf("%d", &n);
    a = (float *) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
    for (i = 0; i < n; i++)
        printf("%f ", a[i]);
    free(a);
    return 0;
}
//float m[5];
//for (int i = 0; i < 4; i++) {
//    scanf("%f", &m[i]);
//}
