#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//BT luyen pointer
//BT1: Tim max trong mang
int arr[100];
int *max(int *n, int *arr){
    static int max = INT_MIN;
    for(int i =0; i < *n; i++){
        if(max < *(arr+i)){
            max = *(arr+i);
        }
    }
    return &max;
}
void nhap_mang(int *n, int *arr){
    printf("Nhap kich thuoc mang \n");
    scanf("%d", n);
    printf("Nhap mang \n");
    for(int i =0; i < *n; i++){
        scanf("%d", arr+i);
    }
}

int main()
{
    int n;
    int *ptr_arr = arr;
    nhap_mang(&n, ptr_arr);
    int *maxx = max(&n, ptr_arr);
    printf("Gia tri lon nhat la %d", *maxx);
    return 0;
}
