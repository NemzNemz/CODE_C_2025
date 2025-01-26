#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//BTVIP: Viet ham luu so co gia tri 1000 vao mang uint8_t
//Tu cac phan tu mang ghep lai thanh gia tri 1000
void tach_so_int(uint8_t arr[], int n){
    int i = 0;
    while(n > 0){
        arr[i] = n % 256;
        n /=256;
        i++;
    }
}

int ghep_so(uint8_t arr[], int size){
    int res = 0;
    for(int i =0; i < size; i++){
        res += arr[i] *(1 <<(8*i));
    }
    return res;

}
int main()
{
    uint8_t arr[4]={0};
    int n = 1000;

    tach_so_int(arr, 1000);
    printf("Cac so trong byte la \n");
    for(int i =0; i < 4; i++){
        printf("%d ", arr[i]);
    }

    int original_number = ghep_so(arr, 4);
    printf("So sau khi ghep lai la: %d\n", original_number);
    return 0;
}
