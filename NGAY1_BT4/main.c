#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
//Nhap vao 3 so thuc la 3 canh cua 1 tam giac, kiem tra 3 canh co hop le hay khong
//Neu hop le, cho biet loai tam giac do va tinh dien tich tam giac
float c1, c2, c3;
int out;
void nhap(){
    printf("Nhap canh 1: \n");
    scanf("%f", &c1);
    printf("Nhap canh 2: \n");
    scanf("%f", &c2);
    printf("Nhap canh 3: \n");
    scanf("%f", &c3);
}

bool check_tg(){
    if((c1 + c2 > c3 && c1 + c3 > c2 && c2 + c3 > c1) &&
       (c1 >0 && c2 > 0 && c3 > 0)) return true;
    else return false;
}

int loai_tam_giac(){
    if (c1 == c2 && c1 == c3) return 1; //Tam giac deu
    else if((pow(c1, 2) + pow(c2, 2) == pow(c3, 2)) ||
            (pow(c2, 2) + pow(c3, 2) == pow(c1, 2)) ||
            (pow(c1, 2) + pow(c3, 2) == pow(c2, 2))) return 2;//Tam giac vuong

    else if(c1 == c2 || c1 == c3 || c2 == c3) return 3; //Tam giac can

    else if((pow(c1, 2) + pow(c2, 2) > pow(c3, 2)) ||
            (pow(c2, 2) + pow(c3, 2) > pow(c1, 2)) ||
            (pow(c1, 2) + pow(c3, 2) > pow(c2, 2))) return 4; //Tam giac nhon

    else if((pow(c1, 2) + pow(c2, 2) < pow(c3, 2)) ||
            (pow(c2, 2) + pow(c3, 2) < pow(c1, 2)) ||
            (pow(c1, 2) + pow(c3, 2) < pow(c2, 2))) return 5; //Tam giac tu
    else return 0;
}

double S_tam_giac(){
    double nua_cvi = (c1+c2+c3) / (double)2;
    return sqrt(nua_cvi*(nua_cvi-c1)*(nua_cvi-c2)*(nua_cvi-c3));

}
int main()
{
    do{
        nhap();
        if(check_tg())
        {
            printf("La tam giac hop le ! \n");
            int loai = loai_tam_giac();
            if(loai == 1) printf("TG DEU! \n");
            else if(loai == 2) printf("TG VUONG! \n");
            else if(loai == 3) printf("TG CAN! \n");
            else if(loai == 4) printf("TG NHON! \n");
            else if(loai == 5) printf("TG TU! \n");
            double S = S_tam_giac();
            printf("Dien tich tam giac la %.2lf \n", S);
        }
    else printf("Khong la tam giac hop le \n");
    printf("Nhap 0 de out chuong trinh !");
    scanf("%d", &out);
    }
    while(out != 0);
    return 0;
}
