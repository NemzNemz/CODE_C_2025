#include <stdio.h>
#include <stdlib.h>
//BT4: Xoa khoang trang cua 1 chuoi va in ra chuoi lien
int main()
{
    printf("Nhap vao 1 chuoi bat ki khong dau!\n");
    char user[90];
    gets(user);
    char *token = strtok(user, " ");
    while(token != NULL){
        printf("%s", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
