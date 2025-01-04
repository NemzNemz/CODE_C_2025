#include <stdio.h>
#include <stdlib.h>
//BT10: BHXH CANADA
int ID[9];
int s1, s2, temp_s2 = 0, TS, out;
void nhap_ID(void){
    printf("Nhap ID cua ban vao! \n");
    for(int i =0; i < 9; i++){
        scanf("%d", &ID[i]);
    }
}

void xuat_ID(void){
    printf("ID cua ban la: ");
    for(int i =0; i < 9; i++){
        printf("%d", ID[i]);
    }
    printf("\n");z
}

int tinh_trong_so(int ID[]){
    s1 = 0, s2 = 0;
    for(int i =0; i < 8; i++){
        if(i % 2 == 0){
            s1 += ID[i];
        }
        else if(i % 2 != 0){
            temp_s2 = ID[i] * 2;
            if(temp_s2 >= 10){
                s2 += temp_s2 % 10;
                temp_s2 /=10;
                s2 += temp_s2;
            }
            else s2 += temp_s2;
        }
    }
    return s1 + s2;
}

int main()
{
    do{
        nhap_ID();
        xuat_ID();
        TS = tinh_trong_so(ID) + ID[8];
        if(TS % 10 == 0){
            printf("ID hop le !\n");
        }else printf("ID khong hop le !\n");
        printf("Nhap 0 de out chuong trinh !");
        scanf("%d", &out);
    }
    while(out != 0);
    return 0;
}
