#include <stdio.h>
#include <stdlib.h>
int kWh, tien;
int tinh_tien_dien(int kWh){
    int tien_dien = 0;
    if(kWh < 100) tien_dien = kWh * 500;
    else if(kWh <=250) tien_dien = 100 * 500 + 800 * (kWh - 100);
    else if(kWh <=350) tien_dien = 100 * 500 + 150 * 800 + 1000 *(kWh - 250);
    else if(kWh > 350) tien_dien = 100 * 500 + 150 * 800 + 1000 * 100 + 1500 * (kWh - 350);
    return tien_dien;
}
int main()
{
    printf("Nhap so kWh vao!\n");
    scanf("%d", &kWh);
    tien = (tinh_tien_dien(kWh));
    printf("Tien dien cua ban la %d", tien);
    return 0;
}
