#include <stdio.h>
#include <stdlib.h>
int day, month, year;

void xuat_loi();
int type_of_month();

void nhap(){
    printf("Nhap ngay (1-31)! \n");
    scanf("%d", &day);
    printf("Nhap thang (1-12)! \n");
    scanf("%d", &month);
    printf("Nhap nam! \n");
    scanf("%d", &year);
    xuat_loi();
}

void xuat_loi(){
    if(day > type_of_month() || day <=0 || month > 12 || month <=0){
        printf("Ngay hoac thang hoac nam ko hop le !! \n");
    }
}

int type_of_month(){
    switch(month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
        break;
    case 4: case 6: case 9: case 11:
        return 30;
        break;
    case 2:
        return 28;
        break;
    default:
        return 0;
    }
}

void xuat_ngay_mai(){
    int tofm = type_of_month();
    if(tofm != 0)
    {
        if(day < 29 && month != 2){
            printf("Ngay mai: %d-%d-%d \n", day+1, month, year);
        }
        else if(day == 28 && tofm == 28){
            printf("Ngay mai: 1-3-%d \n", year);
        }
        else if(day == tofm && month != 12){
            printf("Ngay mai: 1-%d-%d \n", month+1, year);
        }
        else if(day == tofm && month == 12){
            printf("Ngay mai: 1-1-%d \n", year+1);
        }
    }
    else printf("Thang khong hop le! \n");
}

int main()
{
    do{
        nhap();
        //xuat_ngay_mai();
    }
    xuat_ngay_mai();
    while(day > type_of_month() || day <=0 || month > 12 || month <=0);
    return 0;
}
