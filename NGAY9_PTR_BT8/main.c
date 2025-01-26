#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BTNC2: Viet ham duyet chuoi "text" va bien thanh chuoi ko co dau cach
char arr[100];
void bo_khoang_trang(char *pt_arr){
    //Tinh do dai chuoi
    int len = strlen(pt_arr);
    for(int i =0; i < len ; i++){
        if(pt_arr[i] == ' '){
            //Neu co ktrang, dich len 1
            //Lay ki tu do ghi de len khoang trang
            for(int j = i+1; j < len; j++){
                pt_arr[j-1] = pt_arr[j];
            }
            i--;
            len--;
            pt_arr[len] = '\0';
        }
    }
}
int main()
{
    char *ptr_arr = arr;
    printf("Nhap chuoi vao \n");
    gets(ptr_arr);
    bo_khoang_trang(ptr_arr);
    printf("%s", ptr_arr);
    return 0;
}
