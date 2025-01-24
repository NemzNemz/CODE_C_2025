#include <stdio.h>
#include <stdlib.h>
//Bai tap: Sap xep mang co ban truoc cai da
void bubble_sort(int n, int arr[]){
    int tam;
    for(int i =0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                tam = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tam;
            }
        }
    }
}

int main()
{
    int n;
    printf("Nhap kich thuoc mang 1 chieu vao \n");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap gia tri cho tung phan tu! \n");
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubble_sort(n, arr);
    printf("Mang sau khi sap xep la \n");
    for(int i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
