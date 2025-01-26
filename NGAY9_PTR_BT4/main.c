#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BT4: Tim do dai chuoi nhung su dung con tro
void nhap(int arr[]){
    printf("Nhap mang \n");
    gets(arr);
}

int *do_dai_chuoi(int arr[]){
    static int len;
    len = strlen(arr);
    return &len;
}

int main()
{
    char arr[100];
    nhap(arr);
    int *do_dai;
    do_dai = do_dai_chuoi(arr);
    printf("Do dai cua chuoi la %d", *do_dai);
    return 0;
}
