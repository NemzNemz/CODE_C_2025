#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BT luyen pointer
//BT6: Su dung con tro de dao nguoc 1 chuoi
char array[100];
void nhap(char *arr){
    printf("Nhap chuoi vao! \n");
    fgets(arr, 100, stdin);
}

void dao_chuoi(char *arr){
    int len = strlen(arr);
    for(int i = 0; i < len / 2; i++){
        char temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}

int main()
{
    char *ptr_arr = array;
    nhap(ptr_arr);
    dao_chuoi(ptr_arr);
    //ptr_arr la dia chi full chuoi
    //*ptr_arr la dia chi cua phan tu dau tien trong chuoi!
    printf("Chuoi sau khi dao la %s", ptr_arr);
    return 0;
}
