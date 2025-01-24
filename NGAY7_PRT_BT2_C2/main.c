#include <stdio.h>
#include <stdlib.h>
//Cung la sap xep mang nhung bay gio phai xai con tro!!
//Cach thu 2
int main()
{
    int n = 4;
    int arr[n];
    int *ptr = arr;
    int temp;

    printf("Nhap cac phan tu vao mang! \n");
    for(int i =0; i < n; i++){
        scanf("%d", ptr+i);
    }
    //-------------------------------------//
    for(int i = 0; i < n -1; i++){
        for(int j =0; j < n-i-1; j++){
            if(ptr[j] > ptr[j+1]){
                temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
    }

    //------------------------------------//
    printf("Mang sau khi sap xep la: \n");
    for(int i =0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    return 0;
}
