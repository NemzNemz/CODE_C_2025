#include <stdio.h>
#include <stdlib.h>
//BT2: Nhap vao 1 chuoi, nhap ki tu can tim va tra ve vi tri cua ki tu do trong chuoi
int main()
{
    printf("Nhap vao 1 chuoi bat ki!\n");
    char user[90];
    gets(user);
    printf("Nhap vao KI TU can tim trong chuoi \n");
    char text[10];
    scanf("%s", &text);
    char *asw = strstr(user, text);
    if(asw != NULL){
        printf("Da tim thay %s trong chuoi \n", text);
        printf("Vi tri cua no la %d \n", asw - user);
    }
    else
        printf("Cha thay cai gi ca !");
    return 0;
}
