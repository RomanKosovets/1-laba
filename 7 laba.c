#include "stdio.h"

int main() {
    printf("№1\n");
    enum Magazines {
        BOOK,
        MAGAZINE,
        NEWSPAPER
    };
    enum Magazines c = NEWSPAPER;
    printf("Номер Газеты в перечислении: %d\n", c);

    printf("№2\n");
    struct Rectangle {
        float x;  // координата x
        float y;  // координата y
        float h;  // высота
        float w;  // ширина
        float P;  // периметр
    };
    struct Rectangle p;
    p.x = 2;
    p.y = 3;
    p.h = 10;
    p.w = 800;
    p.P = 2 * (p.h + p.w);
    printf("Периметр прямоугольника = %f\n", p.P);

    printf("№3\n");
    struct element {
        unsigned vkl:1;
        unsigned pause:1;
        unsigned record:1;
    };
    union MP3_player {
        int i;
        struct element err;
    };
    union MP3_player q;
    scanf("%x",&q.i);
    printf("Воспроизведение: %d\nПауза: %d\nЗапись: %d\n",q.err.vkl,q.err.pause,q.err.record);
    return 0;
}



