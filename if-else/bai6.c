#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float D, Dx, Dy;
    float x, y;
    printf("Nhap cac he so cua he phuong trinh:\n");
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);
    printf("d = "); scanf("%f", &d);
    printf("e = "); scanf("%f", &e);
    printf("f = "); scanf("%f", &f);
    D = a * e - b * d;
    Dx = c * e - b * f;
    Dy = a * f - c * d;
    if (D != 0) {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem duy nhat:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    } else {
        if (Dx == 0 && Dy == 0) {
            printf("He phuong trinh co vo so nghiem.\n");
        } else {
            printf("He phuong trinh vo nghiem.\n");
        }
    } 
    return 0;
}
