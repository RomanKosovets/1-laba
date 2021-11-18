// Заголовочный файл 11 лабы

#include "stdio.h"
#include "mytriangle.h"

int main ()
{
    struct Arbitary_Triangle value= {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    float square, perimeter;
    value = create_struct (value);
    square = Square_Triangle(value);
    perimeter = Perimeter_Triangle (value);
    printf("Площадь произвольного треугольника = %f\n", square);
    printf("Периметр произвольного треугольника = %f\n", perimeter);
    return 0;
}


----------------------------------------------------------------------------------------
  
// файл mytriangle.с, где реализуются функции
  
#include <math.h>
#include "mytriangle.h"

float Square_Triangle(struct Arbitary_Triangle p) {
    float S;
    S = 0.5 * fabs((p.x2 - p.x1) * (p.y3 - p.y1) - (p.x3 - p.x1) * (p.y2 - p.y1));
    return S;
}

float Perimeter_Triangle(struct Arbitary_Triangle p) {
    float AB;
    float BC;
    float AC;
    float P;
    AB = sqrtf((powf(p.x2 - p.x1, 2)) + (powf(p.y2 - p.y1, 2)));
    BC = sqrtf((powf(p.x3 - p.x2, 2)) + (powf(p.y3 - p.y2, 2)));
    AC = sqrtf((powf(p.x3 - p.x1, 2)) + (powf(p.y3 - p.y1, 2)));
    P = AB + BC + AC;
    return P;
}

struct Arbitary_Triangle create_struct (struct Arbitary_Triangle p) {
    p.x1 = 9;
    p.y1 = 7;
    p.x2 = 3;
    p.y2 = 4;
    p.x3 = 6;
    p.y3 = 2;
    return p;
}


----------------------------------------------------------------------------------------
  
// файл mytriangle.h, где задаются функции
  
#ifndef MYTRIANGLE_H
#define MYTRIANGLE_H

struct Arbitary_Triangle {
    float x1, y1, x2, y2, x3, y3;
};

struct Arbitary_Triangle create_struct (struct Arbitary_Triangle value);
float Square_Triangle(struct Arbitary_Triangle value);
float Perimeter_Triangle(struct Arbitary_Triangle value);

#endif

