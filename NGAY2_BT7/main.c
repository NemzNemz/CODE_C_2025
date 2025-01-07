#include <stdio.h>
#include <stdlib.h>
//Phuong trinh bac 1 ax + b = 0;
float a, b;
void nhap(){
    printf("Nhap a vao \n");
    scanf("%f", &a);
    printf("Nhap b vao \n");
    scanf("%f", &b);
}

int main()
{
    nhap();
    if(a == 0){
        if(b == 0) {
            printf("Day la phuong trinh vo nghiem! \n");
        }
        else if(b != 0){
            printf("Day la phuong trinh vo so nghiem! \n");
        }
    }
    else if(a != 0){
        float x = -b/a;
        printf("Nghiem duy nhat cua phuong trinh la: %.2f \n", x);
    }
}
