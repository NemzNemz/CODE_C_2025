#include <stdio.h>
#include <stdlib.h>
//Cung la sap xep mang nhung bay gio phai xai con tro!!
//Tham so cua ham nay la 2 con tro khac nhau
void nhap_mang(int *n, int arr[]){
    printf("Nhap so luong phan tu trong mang !\n");
    scanf("%d", n);
    printf("Nhap tung phan tu 1 \n");
    for(int i =0; i < *n; i++){
        scanf("%d", arr+i);
    }
}

void bb_sort(int *n, int arr[]){
    int temp;
    for(int i =0; i < *n - 1; i++){
        for(int j =0; j < *n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n, arr[100];
    nhap_mang(&n, arr);
    printf("Mang sau khi xep la: \n");
    bb_sort(&n, arr);
    for(int i =0; i <n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
