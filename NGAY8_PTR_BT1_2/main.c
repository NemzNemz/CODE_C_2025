#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BT: Viet 1 ham truyen vao 1 chuoi, sau do loai bo khoang trang va in ra
//C2
char arr[100];
void loai_bo_ktrang(char *ptr_arr){
    int len = strlen(ptr_arr);
    for(int i =0; i < len; i++){
        //Neu co khoang trang trong chuoi thu i
        if(ptr_arr[i]== ' '){
            for(int j = i+1; j < len; j++){
                //Dich ki tu hien tai len truoc
                ptr_arr[j-1] = ptr_arr[j];
            }
            i--;
            len --;
            ptr_arr[len] = '\0';
        }
    }
}
int main()
{
    char *ptr = arr;
    printf("Nhap chuoi vao ! \n");
    gets(ptr);
    loai_bo_ktrang(ptr);
    printf("%s", ptr);
    return 0;
}
