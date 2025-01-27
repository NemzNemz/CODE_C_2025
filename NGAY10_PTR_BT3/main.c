#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//BT luyen pointer
//BT8: Viet ham tinh binh phuong cac phan tu trong mang
int arr[100];
void nhap_mang(int *n, int *arr){
    printf("Nhap so phan tu vao \n");
    scanf("%d", n);
    printf("Nhap tung phan tu vao \n");
    for(int i =0; i < *n;i++){
        scanf("%d", arr+i);
    }
}

void binh_phuong_mang(int *n, int *arr){
    for(int i =0; i < *n; i++){
        *(arr+i) = (int)pow(*(arr+i), 2);
    }
}

int main()
{
    int *ptr_arr = arr;
    int n;
    nhap_mang(&n, ptr_arr);
    binh_phuong_mang(&n, ptr_arr);
    printf("Mang sau khi binh phuong la \n");
    for(int i=0; i < n; i++){
        printf("%d ", ptr_arr[i]);
    }
    return 0;
}
