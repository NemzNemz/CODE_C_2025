#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Nhap vao dien tich S. Tinh the tich V cua hinh cau
//R duoc tinh rieng
#define PI 3.1415
double R, V, S =0;
int main()
{
    printf("Nhap the tich S vao\n");
    scanf("%lf", &S);
    R = sqrt(S/(4*PI));
    printf("Ban kinh R tu S la %.3lf \n", R);
    V = (4*(PI*pow(R, 3)/3));
    printf("The tich cua hinh cau la %.3lf", V);
    return 0;
}
