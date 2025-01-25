#include <stdio.h>
#include <stdlib.h>
//Con tro va ham_TRUYEN THAM SO: MANG
//BT: nhap xuat mang
int array[100] = {0};
void nhap(int *n, int *ptr_arr){
    printf("Nhap so phan tu trong mang! \n");
    scanf("%d", n);
    printf("Nhap mang! \n");
    for(int i =0; i < *n; i++){
        scanf("%d", ptr_arr+i);
        //ptr_arr++;
    }
}
void xuat(int *n, int *ptr_arr){
    printf("Noi dung mang la: \n");
    for(int i =0; i < *n; i++){
        printf("%d \n", ptr_arr[i]);
    }
}

int main()
{
    int n;
    nhap(&n, array);
    xuat(&n, array);
    return 0;
}
