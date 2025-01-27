#include <stdio.h>
#include <stdlib.h>
//BT luyen pointer
//BT7: Tim phan tu dau tien lon hon x trong mang
int arr[100];
void nhap_mang(int *n, int *arr){
    printf("Nhap so phan tu vao \n");
    scanf("%d", n);
    printf("Nhap tung phan tu vao \n");
    for(int i =0; i < *n;i++){
        scanf("%d", arr+i);
    }
}

int *upper_x(int *x, int*n, int *arr){
    for(int i =0; i < *n; i++){
        if(*(arr+i) > *x) return (arr+i);
    }
    return NULL;
}

int main()
{
    int *ptr_arr = arr;
    int *ptr_up_x;
    int n, x;
    nhap_mang(&n, ptr_arr);
    printf("Nhap x vao de tim phan tu dau tien lon hon x! \n");
    scanf("%d", &x);
    ptr_up_x = upper_x(&x, &n, ptr_arr);
    if(ptr_up_x != NULL){
        printf("Phan tu dau tien lon hon x trong mang la %d", *ptr_up_x);
    }
    else printf("Khong co so nao lon hon x!");
    return 0;
}
