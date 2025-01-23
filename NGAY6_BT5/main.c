#include <stdio.h>
#include <stdlib.h>
//BT5: Nhap 1 chuoi va dem so lan xuat hien trong chuoi cua 1 ki tu nhap tu ban phim
int main()
{
    int count = 0;
    printf("Nhap vao 1 chuoi bat ki!\n");
    char user[90];
    gets(user);
    printf("Nhap vao KI TU (1 chu) can tim trong chuoi \n");
    char text[2];
    scanf("%s", &text);
    //Truoc het minh se tach tung chu 1
    char *token = strtok(user, " ");
    while(token != NULL){
        char *asw = strstr(token, text);
        if(asw != NULL){
            count++;
        }
        token = strtok(NULL, " ");
    }
    printf("Da tim thay %s %d lan !", text, count);
}
