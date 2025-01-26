#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BT luyen pointer
//BT4: Dem so ki tu trong 1 chuoi bang cach duyet con tro
char arr[100];
int *dem_ky_tu(char *arr){
    static int count =0;
    //Reset de chong bi cong them
    count = 0;
    //Neu chua co ki tu ket thuc chuoi
    for(int i =0; *(arr +i) != '\0'; i++){
        if(*(arr+i) != ' '){
            count++;
        }
    }
    return &count;

}

int main()
{
    char *ptr_arr = arr;
    printf("Nhap chuoi vao \n");
    fgets(ptr_arr, 100, stdin);
    int *dem = dem_ky_tu(ptr_arr);
    printf("So luong ki tu la %d (Bao gom ki tu kthuc chuoi!)", *dem);
}
