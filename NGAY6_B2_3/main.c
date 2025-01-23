#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Cac thao tac voi chuoi: strcpy
//Strcpy dung de copy gia tri cua chuoi nguon vao chuoi dich
//Cu phap la: char* strcpy (char* destination, const char* source)
int main()
{
    char* src = "Hello oc tieu!";
    char dest2[] = "I hate u!";
    //Lan nay chuoi src la 1 con tro kieu char
    //Chuong trinh nay chac chan ko chay duoc do con tro kieu char
    strcpy(src, dest2);
    printf("%s \n", src);
    return 0;
}
