#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BT luyen pointer
//BT5: Dem so TU trong 1 chuoi
char arr[100];
int *dem_tu(char *arr){
    static int count =0;
    count =0;
    char *token = strtok(arr," ");
    while(token != NULL){
        count++;
        token = strtok(NULL, " ");
    }
    return &count;
}

int main()
{
    char *ptr_arr = arr;
    printf("Nhap chuoi vao \n");
    fgets(ptr_arr, 100, stdin);
    int *dem = dem_tu(ptr_arr);
    printf("So tu trong chuoi la %d", *dem);
}
