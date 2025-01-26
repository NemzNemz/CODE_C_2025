#include <stdio.h>
#include <stdlib.h>
//BT6: Su dung con tro duyet mang
//Sap xep tang dan giam dan
void nhap(int *n, int arr[]){
    printf("Nhap kich thuoc phan tu \n");
    scanf("%d", n);
    printf("Nhap mang \n");
    for(int i =0; i < *n; i++){
        scanf("%d", arr+i);
    }
}

void bb_sort_tang(int *n, int *arr){
    int temp;
    for(int i = 0; i < *n-1; i++){
        for(int j = 0; j < *n - i - 1; j++){
            if(*(arr + j) > *(arr + j + 1)){
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void bb_sort_giam(int *n, int *arr){
    int temp;
    for(int i = 0; i < *n-1; i++){
        for(int j = 0; j < *n - i - 1; j++){
            if(*(arr + j) < *(arr + j + 1)){
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int n, arr[100];
    int *ptr_arr = arr;
    nhap(&n, arr);
    bb_sort_tang(&n, ptr_arr);
    printf("Mang duoc tang: \n");
    for(int i =0; i < n; i++){
        printf("%d ", *(ptr_arr+i));
    }
    printf("\n");

    bb_sort_giam(&n, ptr_arr);
    printf("Mang duoc giam: \n");
    for(int i =0; i < n; i++){
        printf("%d ", *(ptr_arr+i));
    }
    return 0;
}
