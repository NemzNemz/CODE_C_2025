#include <stdio.h>
#include <stdlib.h>
//BT2: Viet ham su dung con tro de nhap va in ra 1 mang
void nhap(int *n, int arr[]){
    printf("Nhap kich thuoc phan tu \n");
    scanf("%d", n);
    printf("Nhap mang \n");
    for(int i =0; i < *n; i++){
        scanf("%d", arr+i);
    }
}

void xuat(int *n, int arr[]){
    for(int i =0; i < *n; i++){
        printf("%d \n", *(arr+i));
    }
}

int main()
{
    int n, arr[100];
    nhap(&n, arr);
    xuat(&n, arr);
    return 0;
}
