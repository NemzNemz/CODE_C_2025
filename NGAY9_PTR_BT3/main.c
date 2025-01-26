#include <stdio.h>
#include <stdlib.h>
//BT3: Chuong trinh tinh tong cac phan tu mang su dung con tro
void nhap(int *n, int arr[]){
    printf("Nhap kich thuoc phan tu \n");
    scanf("%d", n);
    printf("Nhap mang \n");
    for(int i =0; i < *n; i++){
        scanf("%d", arr+i);
    }
}

int *sum (int *n, int arr[]){
    static int res;
    for(int i =0; i < *n; i++){
        res += *(arr + i);
    }
    return &res;
}
int main()
{
    int n, arr[100];
    nhap(&n, arr);
    int *kq = sum(&n, arr);
    printf("Tong la %d ", *kq);
    return 0;
}
