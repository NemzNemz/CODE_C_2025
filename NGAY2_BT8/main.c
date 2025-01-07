#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Phuong trinh bac 1 ax^2 + bx + c = 0;
float a, b, c;
void nhap(){
    printf("Nhap a vao \n");
    scanf("%f", &a);
    printf("Nhap b vao \n");
    scanf("%f", &b);
    printf("Nhap c vao \n");
    scanf("%f", &c);
}

float delta_cal(){
    return (b*b) - 4*a*c;
}

int main()
{
    nhap();
    float delta = delta_cal();
    if(a == 0){
        if(b == 0) {
            if(c == 0){
                printf("Day la phuong trinh vo so nghiem! \n");
            }
            else if(c != 0){
                printf("Day la phuong trinh vo nghiem! \n");
            }
        }
        else if(b != 0){
            float x = -c/b;
            printf("Nghiem duy nhat cua phuong trinh la: %.2f \n", x);
        }
    }
    else if(a != 0){
        if(delta > 0){
            float x1 = (-b + sqrt(delta))/(2*a);
            float x2 = (-b - sqrt(delta))/(2*a);
            printf("Phuong trinh co 2 nghiem phan biet! \n");
            printf("Nghiem x1 la %.2f \n", x1);
            printf("Nghiem x2 la %.2f \n", x2);
        }
        else if(delta == 0){
            float x3 = -b/(2*a);
            printf("Phuong trinh co nghiem kep! \n");
            printf("Nghiem kep la %2.f \n", x3);
        }
        else if(delta < 0){
            printf("Phuong trinh vo nghiem thuc !! \n");
        }
    }
}
