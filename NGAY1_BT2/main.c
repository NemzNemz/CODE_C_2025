#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Nhap vao toa do 2 diem A(xA, yA) va B(xB, yB). Tinh khoang cach AB
double xA, yA, xB, yB, res;
void nhap_toa_do(void){
    printf("Nhap toa do xA !\n");
    scanf("%lf", &xA);
    printf("Nhap toa do yA !\n");
    scanf("%lf", &yA);
    printf("Nhap toa do xB !\n");
    scanf("%lf", &xB);
    printf("Nhap toa do yB !\n");
    scanf("%lf", &yB);
}

double tinh_kc(double xA, double yA, double xB, double yB){
    return sqrt(pow(xB - xA, 2)+ pow(yB -yA, 2));
}

int main()
{
    nhap_toa_do();
    double res = tinh_kc(xA, yA, xB, yB);
    printf("Khoang cach 2 diem la %lf", res);
    return 0;
}
