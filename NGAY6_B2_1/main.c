#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Cac thao tac voi chuoi: strcpy
//Strcpy dung de copy gia tri cua chuoi nguon vao chuoi dich
//Cu phap la: char* strcpy (char* destination, const char* source)
int main()
{
    char src[] = "Hello oc tieu!";
    char dest[] = "I miss your voice soo much ~~!";
    //Sau ham nay dest se la src
    strcpy(dest, src);
    printf("%s \n", dest);
    return 0;
}
