#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//BT luyen pointer
//BT3: Tra ve min trong mang
int arr[100];
void nhap_mang(int *n, int *arr){
    printf("Nhap kich thuoc mang \n");
    scanf("%d", n);
    printf("Nhap mang \n");
    for(int i =0; i < *n; i++){
        scanf("%d", arr+i);
    }
}

int *min_trong_arr(int *n, int *arr){
    static int min = INT_MAX;
    for(int i =0; i < *n; i++){
        if(min > *(arr+i)){
            min = *(arr+i);
        }
    }
    return &min;
}

int main()
{
    int n;
    int *ptr_arr = arr;
    nhap_mang(&n, ptr_arr);
    int *ptr_min = min_trong_arr(&n, ptr_arr);
    printf("Min la %d", *ptr_min);
    return 0;
}
