#include <stdio.h>

int main() {

    int m[] = {34, 45, 56, 67, 78, 89};
    int m1[2][2] = {{1, 1},
                    {0, 1}};
    int m2[2][2] = {{2, 0},
                    {3, 0}};
    int result[2][2] = {{0},
                        {0}};
    for (int i = 0; i < 6; i++) {
        printf("%d ", m[i]);
    }
    for (int i = 0; i < 2; i++) {
        for (int n = 0; n < 2; n++) {
            for (int k = 0; k < 2; k++) {
                result[i][n] = result[i][n] + m1[i][k] * m2[k][n];
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        printf("\n");
        for (int n = 0; n < 2; n++) {
            printf("%d ", result[i][n]);

        }
    }
    return 0;
}
