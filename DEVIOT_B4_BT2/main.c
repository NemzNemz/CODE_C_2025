#include <stdio.h>0
#include <stdlib.h>
#include <math.h>
float a, b, c;

float delta_cal(float a, float b, float c){
    return b*b - 4*a*c;
}
int main()
{
    float delta;
    printf("Nhap bien a \n");
    scanf("%f", &a);
    printf("Nhap bien b \n");
    scanf("%f", &b);
    printf("Nhap bien c \n");
    scanf("%f", &c);

    if(a == 0){
        if (b == 0){
            if(c == 0){
                printf("Phuong trinh vo so nghiem !! \n");
            }
            else if (c != 0) printf("Phuong trinh vo nghiem !! \n");
        }
        else if(b != 0) printf("Nghiem x la %.2f", -c/b);
    }
    else {
        delta = delta_cal(a, b, c);
        if(delta > 0){
            printf("Phuong trinh co 2 nghiem phan biet !! \n");
            printf("Nghiem x1 la %.2f \n", (-b +sqrt(delta)) / (2*a));
            printf("Nghiem x2 la %.2f \n", (-b -sqrt(delta)) / (2*a));
        }
        else if (delta == 0){
            printf("Phuong trinh co nghiem kep!! \n");
            printf("Nghiem x la %.2f", -b/(2*a));
        }
        else if (delta < 0) printf("Phuong trinh vo nghiem !!");
    }
    return 0;
}
