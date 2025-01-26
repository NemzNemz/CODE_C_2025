#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BTNC3: Viet ham duyet chuoi "text"
//Sau do loai bo ki tu khong mong muon trong chuoi
char arr[100];

void bo_ki_tu(char *pt_arr, char* ers){
    //Tinh do dai chuoi
    int len = strlen(pt_arr);
    for(int i =0; i < len ; i++){
        //Gap thang ki tu muon xoa
        if(pt_arr[i] == *ers){
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
    fgets(ptr_arr, 100, stdin);
    char ers;
    printf("Nhap ki tu muon xoa bo vao \n");
    scanf("%c", &ers);
    bo_ki_tu(ptr_arr, &ers);
    printf("%s", ptr_arr);
}
