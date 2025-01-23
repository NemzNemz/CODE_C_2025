#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Cac thao tac voi chuoi: strstr
//Strstr su dung de tim 1 chuoi con trong chuoi me
//Cu phap la: char* strc (const char* str, const char* sub)
int main()
{
    char s1[20] ="Chao ngay moi!";
    char s2[10] ="moi";
    char *first;
    //Muc tieu la tim "moi"
    //Dong thoi in thu dia chi va dem no xem no co o dung vi tri khong
    first = strstr(s1, s2);
    if(first != NULL){
        printf("Chuoi con la %s \n", s2);
        printf("Dia chi cua chuoi me la %d \n", s1);
        printf("Dia chi cua chuoi con la %d \n", first);
        printf("Da tim thay %s tai phan tu thu %d \n", s2, first - s1);
    }
    else
        printf("Cha co gi ca! \n");
}
