#include <stdio.h>
#include <stdlib.h>
//Con tro cap 1
int main()
{
    int so_nguyen = 500;
    //1 con tro "pointer" dang tro vao bien "so_nguyen"
    int *pointer = &so_nguyen;
    //Luu y ve kieu du lieu cua con tro phai khop voi kieu du lieu cua bien duoc tro
    unsigned char *pointerr = &so_nguyen;
    /*
    Con tro (int) co 3 kieu sau:
        - pointer: dia chi cua bien duoc con tro tro den tren RAM
        - &pointer: dia chi cua con tro o tren RAM
        - *pointer: gia tri cua bien dang duoc tro vao
    */
    printf("Dia chi cua bien la %d \n", &so_nguyen);
    printf("dia chi cua con tro tro vao so nguyen la %d \n", pointer);
    printf("gia tri cua bien dang duoc tro la %d \n", *pointer);
    printf("gia tri cua bien dang duoc tro la %d \n", *pointerr);
    printf("dia chi cua con tro tren RAM la %d \n", &pointer);
}
