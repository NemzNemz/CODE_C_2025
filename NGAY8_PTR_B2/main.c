#include <stdio.h>
#include <stdlib.h>
//Con tro va ham_TRUYEN THAM SO
//BT hoan vi
void hoan_vi(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void hoan_vi_vip(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 100, b = 99;
    hoan_vi(a, b);
    printf("Gia tri a, b sau tham tri la %d - %d\n", a, b);
    hoan_vi_vip(&a, &b);
    printf("Gia tri a, b sau tham chieu la %d - %d\n", a, b);
    return 0;
}
