#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);   
    if(a + b > c && a + c > b && b + c > a) {
        float chuVi = a + b + c;
        printf("Chu vi tam giac: %.2f\n", chuVi);  
        float p = chuVi / 2;
        float dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Dien tich tam giac: %.2f\n", dienTich);    
        if(a == b && b == c) {
            printf("deu\n");
        } 
        else if((a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) && (a == b || b == c || a == c)) {
            printf("vuong can\n");
        }
        else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            printf("vuong\n");
        }
        else if(a == b || b == c || a == c) {
            printf("can\n");
        }
        else {
            printf("tam giac thuong\n");
        }
    }
    else {
        printf("khong phai tam giac\n");
    }
    return 0;
}
