#include <stdio.h>
#include <stdlib.h>
//Phuong trinh bac 1 ax + b = 0;
void nhap(float *a, float *b){
    float a, b;
    printf("Nhap a vao \n");
    scanf("%f", &a);
    printf("Nhap b vao \n");
    scanf("%f", &b);
}

void ptb1(float *a, float *b){
    if(*a == 0){
        if(*b == 0) {
            printf("Day la phuong trinh vo so nghiem! \n");
        }
        else if(*b != 0){
            printf("Day la phuong trinh vo nghiem! \n");
        }
    }
    else if(*a != 0){
        float x = -*b/ *a;
        printf("Nghiem duy nhat cua phuong trinh la: %.2f \n", x);
    }
}

int main()
{
    nhap(&a, &b);
    ptb1(&a, &b);
}
