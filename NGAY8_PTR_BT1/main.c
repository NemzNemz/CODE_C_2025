#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BT: Viet 1 ham truyen vao 1 chuoi, sau do loai bo khoang trang va in ra
//C1
char arr[100];
void loai_bo_ktrang(char *ptr_arr){
    printf("Nhap vao 1 chuoi bat ki! \n");
    gets(ptr_arr);
    char *token = strtok(ptr_arr, " ");
    while(token != NULL){
        printf("%s", token);
        token = strtok(NULL, " ");
    }
}
int main()
{
    loai_bo_ktrang(arr);
    return 0;
}
