#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Tính tiền tích lũy qua từng năm
float lai_suat, tien_von, thoi_han;
void nhap(){
    do{
        printf("Nhap lai suat, tien von va thoi han vay! \n");
        scanf("%f %f %f", &lai_suat, &tien_von, &thoi_han);
        if(lai_suat < 0 || tien_von <0 || thoi_han < 0)
        {
            printf("Sai du lieu! lam on nhap lai \n");
        }
    }
    while(lai_suat < 0 || tien_von <0 || thoi_han < 0);
}

float tien_tich_luy(){
    float money = 0;
    for(int i = 1; i <=thoi_han ; i++){
        money = tien_von *pow((1 +lai_suat), i);
        printf("Tien lai nam %d la: %.2f \n", i, money);
    }
}

int main()
{
    nhap();
    tien_tich_luy();
    return 0;
}
