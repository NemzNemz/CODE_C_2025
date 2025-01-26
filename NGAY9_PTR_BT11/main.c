#include <stdio.h>
#include <stdlib.h>
//BT luyen pointer
//BT2: Tinh tong mang
int arr[100];
void nhap_mang(int *n, int *arr){
    printf("Nhap kich thuoc mang \n");
    scanf("%d", n);
    printf("Nhap mang \n");
    for(int i =0; i < *n; i++){
        scanf("%d", arr+i);
    }
}

int *tong_mang(int *n, int *arr){
    static int sum = 0;
    for(int i =0; i < *n; i++){
        sum += *(arr+i);
    }
    return &sum;
}
int main()
{
    int n;
    int ptr_arr = arr;
    nhap_mang(&n, ptr_arr);
    int *kq = tong_mang(&n, ptr_arr);
    printf("Tong mang la %d", *kq);

    return 0;
}
