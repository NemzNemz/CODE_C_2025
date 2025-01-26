#include <stdio.h>
#include <stdlib.h>
//BT5: Su dung con tro duyet 1 mang so nguyen
//Sau do in ra voi thu tu dao nguoc lai
void nhap(int *n, int arr[]){
    printf("Nhap kich thuoc phan tu \n");
    scanf("%d", n);
    printf("Nhap mang \n");
    for(int i =0; i < *n; i++){
        scanf("%d", arr+i);
    }
}

//Chu y tham so la 1 con tro kieu int, khong duoc nham voi mang con tro
void xuat_nguoc(int *n, int *arr){
    for(int i = *n -1; i >= 0; i--){
        printf("%d ", *(arr + i));
    }
}

int main()
{
    int n, arr[100];
    int *ptr_arr = arr;
    nhap(&n, arr);
    xuat_nguoc(&n, ptr_arr);
    return 0;
}
