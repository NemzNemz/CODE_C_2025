#include <stdio.h>
#include <stdlib.h>
//BT3: Cat tham so 11/9/2001 :)) ra va luu vao 3 bien ngay, thang, nam tuong ung
int main()
{
    char time[30] = "11/9/2001";
    char ngay[3];
    char thang[3];
    char nam[5];
    char *token = strtok(time, "/");
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
