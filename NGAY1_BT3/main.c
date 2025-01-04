#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Nhap toa do duong tron (xC, yC) la tam duong tron, R ban kinh
//Nhap toa do (xM, yM) cua diem M. Xac dinh M nam trong hay ngoai duong tron
float xC, yC, R, xM, yM;
void nhap(void){
    printf("Nhap xC: \n");
    scanf("%f", &xC);

    printf("Nhap yC: \n");
    scanf("%f", &yC);

    printf("Nhap R: \n");
    scanf("%f", &R);

    printf("Nhap xM: \n");
    scanf("%f", &xM);

    printf("Nhap yM: \n");
    scanf("%f", &yM);
}

double tinh_kc(void){
    return sqrt(pow(xC - xM, 2)+ pow(yC - yM, 2));
}

int main()
{
    nhap();
    double kc = tinh_kc();
    if(kc < R) printf("M nam trong duong tron! \n");
    else if(kc > R) printf("M nam ngoai duong tron! \n");
    else if(kc == R) printf("M nam tren duong tron! \n");
    return 0;
}
