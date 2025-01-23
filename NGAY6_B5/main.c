#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Cac thao tac voi chuoi: strtok
//Strtok duoc su dung de chia 1 chuoi dai thanh cac chuoi nho voi nhau voi cac ki tu dac biet
//Cu phap : char* strtok (char* str, const char* delim)
int main()
{
    char s1[30] = "31/12/2004";
    char ngay[3];
    char thang[3];
    char nam[5];
    //O day minh muon tach chuoi nay thanh 3 phan tu la ngay, thang va nam
    //B1: Lay token dau tien(chuoi nho)
    char* token = strtok(s1, "/");
    while(token != NULL){
        strcpy(ngay, token);
        token = strtok(NULL, "/");
        strcpy(thang, token);
        token = strtok(NULL, "/");
        strcpy(nam, token);
        token = strtok(NULL, "/");
    }
    printf("Ngay %s\n", ngay);
    printf("Thang %s\n", thang);
    printf("Nam %s\n", nam);
    return 0;
}
