#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415
//Nhap vao chi so do cua 1 goc, cho biet no thuoc goc phan tu thu may cua vong tron luong giac
double minute;
void nhap(){
    printf("Nhap so do cua 1 goc tinh bang phut! \n");
    scanf("%lf", &minute);
}

double convert_angle(){
    return minute/(double)60;
}

int xac_dinh(){
    double angle = fmod(convert_angle(), 360);
    if(angle >= 0 && angle < 90) return 1; //Goc phan tu thu 1
    else if (angle >= 90 && angle < 180) return 2; //Goc phan tu thu 2
    else if (angle >= 180 && angle < 270) return 3; //Goc phan tu thu 3
    else if (angle >= 270 && angle < 360) return 4; //Goc phan tu thu 3
    else return 0;
}
double conver_rad(){
    return convert_angle() *(PI/180);
}

int main()
{
    nhap();
    double rad = conver_rad();
    int xd = xac_dinh();
        if(xd == 1) printf("Thuoc goc phan tu thu 1! \n");
        else if(xd == 2) printf("Thuoc goc phan tu thu 2! \n");
        else if(xd == 3) printf("Thuoc goc phan tu thu 3! \n");
        else if(xd == 4) printf("Thuoc goc phan tu thu 4! \n");
    printf("Cos x co gia tri la %lf \n", cos(rad));
    return 0;
}
